#include <iostream>

#include "Serv.h"  // Your .h File  
#include <thrift/transport/TSocket.h>  
#include <thrift/transport/TBufferTransports.h>  
#include <thrift/protocol/TBinaryProtocol.h>  
  
using namespace apache::thrift;  
using namespace apache::thrift::protocol;  
using namespace apache::thrift::transport;  
  
using boost::shared_ptr;  
  
int main(int argc, char **argv) {  
    boost::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));  
    boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));  
    boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));  

  
    transport->open();  
  while(1){
	    // Your Codes  
		Student s;
		s.sno = 123;
		s.sname = "xiaoshe";
		s.ssex = 1;
		s.sage = 30;
		ServClient client(protocol);
	  	client.put(s);
		sleep(3);
  	}
	
    transport->close();  
  
    return 0;  
}  

