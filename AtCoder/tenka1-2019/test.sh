#!/bin/bash
oj dl https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_$1
g++ -Wall -std=c++14 ./$1.cpp
oj test
rm -f a.out
rm -rf test