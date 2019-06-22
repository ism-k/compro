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
    int N, L;
    cin >> N >> L;
    vector<int> azi(N+1);
    int min_azi_abc = 1e9;
    int min_index;\
    ll sum = 0;
    REP(i, N)
    {
        azi[i] = L + i;
        sum += azi[i];
        if (abs(azi[i] < min_azi_abc))
        {
            min_azi_abc = abs(azi[i]);
            min_index = i;
        }
    }

    cout << sum - azi[min_index] << endl;
}