#ifndef __ZHELPERS_CPP__
#define __ZHELPERS_CPP__

#include <zmq.hpp>
#include <string>
#include <exception>

namespace zmq::zhelpers_cpp {
	const std::string
	s_recv_str(zmq::socket_t& sock);
	struct message_error : public std::exception {
		const char* message = "Encountered error recieving message.";

		message_error() {}
		message_error(const char* _message) {
			message = _message;
		}
		const char* what() const throw() {
			return message;
		}
	};
}

const std::string zmq::zhelpers_cpp::s_recv_str(zmq::socket_t& sock) {
	zmq::message_t message;
       	unsigned int flag = sock.recv(&message);
	if(flag == -1) {
		throw zmq::zhelpers_cpp::message_error();
	}
	return std::string(static_cast<char*>(message.data()), message.size());		
}
#endif
