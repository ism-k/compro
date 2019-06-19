#!/bin/bash
oj dl https://atcoder.jp/contests/abc126/tasks/abc126_$1
g++ -Wall -std=c++14 ./abc126_$1.cpp
oj test
rm -f a.out
rm -rf test