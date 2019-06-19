#!/bin/bash
oj dl https://atcoder.jp/contests/abc129/tasks/abc129_$1
g++ -Wall -std=c++14 ./abc129_$1.cpp
oj test
rm -f a.out
rm -rf test