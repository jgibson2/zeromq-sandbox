actor: actor.h actor_test.cpp messages.pb.h messages.pb.cc zhelpers_cpp.h poisonpill.pb.h poisonpill.pb.cc
	protoc -I=. --cpp_out=. poisonpill.proto messages.proto
	g++ -o actor_test actor.h actor_test.cpp messages.pb.h messages.pb.cc poisonpill.pb.h poisonpill.pb.cc zhelpers_cpp.h -lpthread -lzmq -lprotobuf
