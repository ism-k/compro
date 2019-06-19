#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string s;
    cin >> s;

    string fr{s.front()};
    string ba{s.back()};
    int num = s.size() - 2;


    cout << fr + to_string(num) + ba << endl;
}