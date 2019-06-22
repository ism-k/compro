#!/bin/bash
oj dl https://atcoder.jp/contests/abc131/tasks/abc131_$1
g++ -Wall -std=c++14 ./abc131_$1.cpp
oj test
rm -f a.out
rm -rf test