#!/bin/bash
oj dl https://atcoder.jp/contests/abc124/tasks/abc124_$1
g++ -Wall -std=c++14 ./abc124_$1.cpp
oj test
rm -f a.out
rm -rf test