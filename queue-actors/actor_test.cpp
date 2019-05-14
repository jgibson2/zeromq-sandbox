#include <iostream>
//#include <typeinfo>
#include "actor.h"
#include <thread>
#include <zmq.hpp>
#include "messages.pb.h"

class PrintActor : public Actor {
public:
	using Actor::Actor;
	/*	
	void process_kernel(const std::string& message) {
		if(a.ParseFromString(message)) {
			//do stuff if it's TypeA
			std::cout << "A: " << a.field1() << std::endl;
		} else if(b.ParseFromString(message)) {
			//do stuff it it's TypeB
			std::cout << "B: " << b.field3() << std::endl;
		} else {
			//do stuff if we can't parse
			std::cerr << "Could not parse message!" << std::endl;
		}
	}
	*/
	void process_kernel(const std::string& message) {
		if(msg.ParseFromString(message)) {
			switch(msg.messages_case()) {
				case Message::MessagesCase::kA:
					//do stuff if it's TypeA
					a = msg.a();
					std::cout << "A: " << a.field1() << std::endl;
					break;
				case Message::MessagesCase::kB:
					//do stuff it it's TypeB
					b = msg.b();
					std::cout << "B: " << b.field3() << std::endl;
					break;
				default:
					//do stuff if we can't parse
					std::cerr << "Could not parse message!" << std::endl;
					break;
			}
		}
	}
private:
	TypeA a;
	TypeB b;
	Message msg;
};



int main() {
//TODO: make message of type Message here

	PrintActor actor("ipc://sock1.ipc");
	TypeA* a = new TypeA();
	a->set_field1("And the years start coming");
	TypeB* b = new TypeB();
	b->set_field3(1);
	auto f = [&](){
		actor.process();
	};
	Message message;

	zmq::context_t context{1};
	zmq::socket_t socket{context, ZMQ_PUB};
	socket.bind("ipc://sock1.ipc");
	std::thread t1(f);
	std::this_thread::sleep_for(std::chrono::seconds(1));
	
	message.set_allocated_a(a);
	Actor::send(std::move(message), socket);

	
	message.set_allocated_b(b);
	Actor::send(std::move(message), socket);

	actor.terminate(socket);
	t1.join();
	std::cout << "Joined thread" << std::endl;
	return 0;
}
