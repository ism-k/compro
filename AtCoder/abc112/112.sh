#!/bin/bash
oj dl https://beta.atcoder.jp/contests/abc112/tasks/abc112_$1
g++ -Wall -std=c++14 ./abc112_$1.cpp
oj test
rm -f a.out
rm -rf test