#!/bin/bash
oj dl https://atcoder.jp/contests/abc133/tasks/abc133_$1
g++ -Wall -std=c++14 ./abc133_$1.cpp
oj test
rm -f a.out
rm -rf test