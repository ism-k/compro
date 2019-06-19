#!/bin/bash
g++ -Wall -std=c++14 ./agc028_$1.cpp
./a.out
rm -f a.out