#!/bin/bash
g++ -Wall -std=c++14 ./abc115_$1.cpp
./a.out
rm -f a.out
rm -rf test