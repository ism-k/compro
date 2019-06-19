#!/bin/bash
oj dl https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_$1
g++ -Wall -std=c++14 ./iroha_$1.cpp
oj test
rm -f a.out
rm -rf test