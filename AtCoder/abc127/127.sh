#!/bin/bash
oj dl https://atcoder.jp/contests/abc127/tasks/abc127_$1
g++ -Wall -std=c++14 ./abc127_$1.cpp
oj test
rm -f a.out
rm -rf test