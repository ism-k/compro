#!/bin/bash
oj dl https://beta.atcoder.jp/contests/abc115/tasks/abc115_$1
g++ -Wall -std=c++14 ./abc115_$1.cpp
oj test
rm -f a.out
rm -rf test