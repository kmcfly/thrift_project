g++ -g -I/usr/iclude/thrift -L/usr/lib/ -lthrift -lm -pthread -lz -lrt -lssl Serv.cpp student_types.cpp student_constants.cpp client.cpp -o client -lthrift
