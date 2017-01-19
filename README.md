# Capsulation Sample

## compile .o
	g++ -std=c++11 -Wall -g -fPIC -c test.cc

## .so

1. compile .so
	g++ -std=c++11 -shared test.o -o libtest.so

2. load .so
	g++ -std=c++11 -Wall main.cc -L. -ltest -o run

## .a

1. compile .a
	ar -r test.a test.o   

2. load .a
	g++ -std=c++11 -Wall -c main.cc
	g++ -std=c++11 -Wall -v main.o test.a -o main

[useful_link][ul]
[ul][//http://www.cnblogs.com/findumars/p/5421910.html]