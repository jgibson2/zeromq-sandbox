#include <zmq.hpp>
#include <iostream>
#include <string>
#include "zhelpers_cpp.h"
#include <unistd.h>

int main(){
	std::string message = "Hello";
	zmq::context_t context{1};
	zmq::socket_t socket{context, ZMQ_REQ};
	socket.connect("tcp://localhost:5555");

	zmq::message_t msg{message.length()};
	memcpy(msg.data(), message.c_str(), message.length());
	socket.send(msg);
	std::cout << "Client sent message" << std::endl;


	//zmq::message_t request;
	//socket.recv(&request);
	std::cout << "Client received message: " 
		<< zmq::zhelpers_cpp::s_recv_str(socket) << std::endl;
	
	return 0;
}
