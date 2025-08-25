#Makefile for numbers

#flags
CXX=g++
CXXFLAGS=-Wall -g

numbers: numbers.o
	$(CXX) $(CXXFLAGS) -o numbers numbers.o
numbers.o: numbers.cpp
	$(CXX) $(CXXFLAGS) -c numbers.cpp

clean:
	rm -f numbers numbers.o
