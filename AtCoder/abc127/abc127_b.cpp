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
    int r, D, x;
    cin >> r >> D >> x;

    ll xi = x;
    REP(i, 10)
    {
        ll xi1 = r*xi - D;
        cout << xi1 << endl;
        xi = xi1;
    }
}