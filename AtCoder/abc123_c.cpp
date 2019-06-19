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
    ll N;
    ll T[5];
    cin >> N >> T[0] >> T[1] >> T[2] >> T[3] >> T[4];

    ll min = N+1;
    for (int i=0; i < 5; i++)
    {
        if (min > T[i])
        {
            min = T[i];
        }
    }

    ll div = ceil( (double)N/ (double)min ) ;

    cout << (ll)div + 4 << endl;
}