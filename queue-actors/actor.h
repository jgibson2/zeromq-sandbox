#ifndef __ACTOR_H__
#define __ACTOR_H__
#include "messages.pb.h"
#include "poisonpill.pb.h"
#include <zmq.hpp>
#include <string>
#include <iostream>
#include "zhelpers_cpp.h"
#include "TQueueConcurrent.h"
#include <atomic>

class Actor {
private:
	PoisonPill poisonpill;
protected:
	zmq::context_t context;
	zmq::socket_t sock_recv;
	zmq::socket_t sock_send;
	
	TQueueConcurrent<std::string> queue;
	std::atomic_bool term;
public:

	Actor(const char* recv_addr, const char* send_addr) :
	       context(1),
	       sock_recv(context, ZMQ_SUB),
	       sock_send(context, ZMQ_PUB),
	       queue(),
	       poisonpill(),
	       term(false)
	{
		sock_recv.connect(recv_addr);
		sock_recv.setsockopt(ZMQ_SUBSCRIBE, "", 0);
		int waittime_ms = 0;
		sock_recv.setsockopt(ZMQ_RCVTIMEO, &waittime_ms, sizeof(waittime_ms));
		sock_send.bind(send_addr);
	}	       

	Actor(const char* recv_addr) :
	       context(1),
	       sock_recv(context, ZMQ_SUB),
	       sock_send(context, ZMQ_PUB),
	       queue(),
	       term(false)
	{
		sock_recv.connect(recv_addr);
		sock_recv.setsockopt(ZMQ_SUBSCRIBE, "", 0);
	}

	template<typename Serializable>
	static void send( Serializable&& s, zmq::socket_t& sock){
		std::string message = s.SerializeAsString();
		zmq::message_t msg{message.length()};
		memcpy(msg.data(), message.c_str(), message.length());
		sock.send(msg);
	}

	bool receive() {
		zmq::message_t message;
		unsigned int flag = sock_recv.recv(&message);
		if(flag == -1 || message.size() == 0) {
			return false;
		}
		queue.emplace_back(std::string(static_cast<char*>(message.data()), message.size()));
		return true;
	}

	void process() {
		while(true) {
			if(queue.empty()){
				receive();
			} else {
				const std::string message = queue.pop_front();
				if(term && poisonpill.ParseFromString(message) && poisonpill.pill() == "actor_poison_magic_terminate") {
					break;
				}
				process_kernel(message);
			}
		}
	}

	void terminate(zmq::socket_t& ext_send_sock) {
		term = true;
		PoisonPill pill;
		pill.set_pill("actor_poison_magic_terminate");
		send(std::move(pill), sock_send);
		send(std::move(pill), ext_send_sock);
	}

	virtual void process_kernel(const std::string& message) = 0;
};

#endif
