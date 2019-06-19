#!/bin/bash
oj dl https://beta.atcoder.jp/contests/agc029/tasks/agc029_$1
g++ -Wall -std=c++14 ./agc029_$1.cpp
oj test
rm -f a.out
rm -rf test