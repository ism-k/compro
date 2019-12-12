#!/bin/bash
oj dl https://atcoder.jp/contests/arc098/tasks/arc098_$1
g++ -Wall -std=c++14 ./arc098_$1.cpp
oj test
rm -f a.out
rm -rf test