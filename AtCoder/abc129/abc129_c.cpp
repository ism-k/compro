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

#define MOD 1'000'000'007

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> a(M);
    vector<int> broken(N+2, 0);
    REP(i, M)
    {
        cin >> a[i];
        broken[a[i]] = 1;
    }

    vector<int> memo(N+2, 0);
    if (broken[1] == 0)
    {
        memo[1] = 1;
    }
    if (broken[2] == 0)
    {
        memo[2] = 1;
    }
    for (int floor = 1; floor <= N; floor++)
    {
        // cout << "floor " << floor << ": ";
        if (broken[floor] == 0)
        {
            memo[floor] = (memo[floor] + memo[floor-2]) % MOD;
            memo[floor] = (memo[floor] + memo[floor-1]) % MOD;
        }
        // cout << memo[floor];
        // cout << endl;
    }    

    cout << memo[N] << endl;
}