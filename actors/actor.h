#ifndef __ACTOR_H__
#define __ACTOR_H__
#include "messages.pb.h"
#include <zmq.hpp>
#include <string>
#include <iostream>
#include "zhelpers_cpp.h"
#include "TQueueConcurrent.h"

class Actor {
private:
	zmq::context_t context;
	zmq::socket_t sock_recv;
	zmq::socket_t sock_send;
	
	TQueueConcurrent<const std::string> queue;
	
	bool send;
	std::string send_msg;
	TypeA a;
	TypeB b;
public:

	Actor(const char* recv_addr, const char* send_addr) :
	       context(1),
	       sock_recv(context, ZMQ_SUB),
	       sock_send(context, ZMQ_PUB),
	       send_msg(),
	       queue() 
	{
		sock_recv.connect(recv_addr);
		sock_recv.setsockopt(ZMQ_SUBSCRIBE, "", 0);
		sock_send.bind(send_addr);
		send = true;
	}	       

	void initReceiveLoop() {
		while(true) {
			const std::string recv_msg = zmq::zhelpers_cpp::s_recv_str(sock_recv);
			queue.emplace_back(std::move(recv_msg));
		}
	}

	std::string receive() {
		std::cout << "Waiting to receive..." << std::endl;
		const std::string recv_msg = zmq::zhelpers_cpp::s_recv_str(sock_recv);
		//const std::string recv_msg = queue.pop_front();
		std::cout << "Received message in actor" << std::endl;
		if(a.ParseFromString(recv_msg)) {
			//do stuff if it's TypeA
			a.set_field1(a.field1() + " and they don't stop coming");
			send_msg = a.SerializeAsString();
		} else if(b.ParseFromString(recv_msg)) {
			//do stuff it it's TypeB
			b.set_field3(b.field3() + 1);
			send_msg = b.SerializeAsString();
		} else {
			//do stuff if we can't parse
			std::cerr << "Could not parse message!" << std::endl;
			send = false;
		}
		std::cout << "Parsed message in actor" << std::endl;
		if(send) {
			zmq::message_t msg{send_msg.length()};
			memcpy(msg.data(), send_msg.c_str(), send_msg.length());
			sock_send.send(msg);
		}
		std::cout << "Sent from actor" << std::endl;
		return send_msg;
	}
};

/*
template<typename ActorType, typename S>
void send(ActorType a, S& message) {
	a.receive(std::move(message));
}

template<typename ActorType, typename S>
void send(ActorType a, S&& message) {
	a.receive(message);
}

template<typename ActorType, typename S>
void send(ActorType a, S message) {
	a.receive(std::move(message));
}
*/

#endif
