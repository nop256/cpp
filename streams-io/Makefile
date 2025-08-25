#makefile for test.cpp

#variables
CXX= g++
CXXFLAGS= -Wall -g

#targets
test: test.o
	$(CXX) $(CXXFLAGS) -o test test.o
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

#clean util
clean:
	rm -rf test test.o
