#include <iostream>
//#include <typeinfo>
#include "actor.h"
#include <thread>
#include <zmq.hpp>
#include "messages.pb.h"

int main() {
	Actor actor("ipc://sock1.ipc", "ipc://sock2.ipc");
	Actor actor2("ipc://sock2.ipc", "ipc://sock3.ipc");
	TypeA a;
	a.set_field1("And the years start coming");
	TypeB b;
	b.set_field3(1);
	auto f = [&](){
		actor.receive();
	};
	auto f2 = [&](){
		auto ret = actor2.receive();
		
		if(a.ParseFromString(ret)) {
			//do stuff if it's TypeA
			std::cout << a.field1() << std::endl;
		} else if(b.ParseFromString(ret)) {
			//do stuff it it's TypeB
			std::cout << b.field3() << std::endl;
		} else {
			//do stuff if we can't parse
			std::cerr << "Could not parse message!" << std::endl;
		}
	};


	zmq::context_t context{1};
	zmq::socket_t socket{context, ZMQ_PUB};
	socket.bind("ipc://sock1.ipc");
	std::cout << "Created context and connected" << std::endl;
	std::thread t1(f);
	std::thread t2(f2);
	std::cout << "Created threads" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "Slept 3 seconds" << std::endl;

	std::string message = a.SerializeAsString();
	zmq::message_t msg{message.length()};
	memcpy(msg.data(), message.c_str(), message.length());
	socket.send(msg);
	std::cout << "Sent message A" << std::endl;

	message = b.SerializeAsString();
	zmq::message_t msg2{message.length()};
	memcpy(msg2.data(), message.c_str(), message.length());
	socket.send(msg2);
	std::cout << "Sent message B" << std::endl;
	
	t1.join();
	t2.join();
	std::cout << "Joined thread" << std::endl;
	return 0;
}
