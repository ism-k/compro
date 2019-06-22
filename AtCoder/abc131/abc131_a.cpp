#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <numeric>
#include <array>
#include <queue>
#include <set>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string S;
    cin >> S;

    bool bad = false;
    for (int i=0; i <= 2; i++)
    {
        if (S[i] == S[i+1])
            bad = true;
    }

    if (bad)
        cout << "Bad" << endl;
    else
        cout << "Good" << endl;
    
}