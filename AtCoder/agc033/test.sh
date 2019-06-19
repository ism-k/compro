#!/bin/bash
oj dl https://atcoder.jp/contests/agc033/tasks/agc033_$1
g++ -Wall -std=c++14 ./agc033_$1.cpp
oj test
rm -f a.out
rm -rf test