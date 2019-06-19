#!/bin/bash
oj dl https://atcoder.jp/contests/${1:0:6}/tasks/${1:0:8}
g++ -Wall -std=c++14 ./$1.cpp
oj test
rm -f a.out
rm -rf test