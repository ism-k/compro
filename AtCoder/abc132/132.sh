#!/bin/bash
oj dl https://atcoder.jp/contests/abc132/tasks/abc132_$1
g++ -Wall -std=c++14 ./abc132_$1.cpp
oj test
rm -f a.out
rm -rf test