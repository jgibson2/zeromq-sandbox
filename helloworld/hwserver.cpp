#include <zmq.hpp>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "zhelpers_cpp.h"

int main() {
	std::string message = "World";
	zmq::context_t context{1};
	zmq::socket_t socket{context, ZMQ_REP};
	socket.bind("tcp://*:5555");
	while(true)
	{
		//zmq::message_t request;
		//socket.recv(&request);
		std::cout << "Server received message: " << 
			zmq::zhelpers_cpp::s_recv_str(socket) << std::endl;

		std::this_thread::sleep_for(std::chrono::seconds(1));

		zmq::message_t reply(message.length());
		memcpy(reply.data(), message.c_str(), message.length());
		socket.send(reply);
		std::cout << "Server sent message" << std::endl;
	}

	return 0;
}
