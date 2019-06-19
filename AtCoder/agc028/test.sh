#!/bin/bash
oj dl https://beta.atcoder.jp/contests/agc028/tasks/agc028_$1
g++ -Wall -std=c++14 ./agc028_$1.cpp
oj test
rm -f a.out
rm -rf test