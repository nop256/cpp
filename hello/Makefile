#makefile for hw

#variables
CXX=g++
CXXFLAGS= -Wall -g

#targets
hello: hello.o
	$(CXX) $(CXXFLAGS) -o hello hello.o
hello.o: hello.cpp
	$(CXX) $(CXXFLAGS) -c hello.cpp

#clean utility
clean:
	rm -f hello hello.o
