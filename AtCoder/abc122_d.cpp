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

ll memo[101][4][4][4];

#define MOD ll(1e9+7)
int main()
{
    int N;
    cin >> N;

    memo[0][3][3][3] = 1;

    for (int index = 0; index < N; index++)
    {
        for (int c1 = 0; c1 < 4; c1++)
        {
            for (int c2 = 0; c2 < 4; c2++)
            {
                for (int c3 = 0; c3 < 4; c3++)
                {
                    if (memo[index][c1][c2][c3] == 0) continue;

                    for (int now = 0; now < 4; now++)
                    {
                        if (c2 == 0 and c3 == 1 and now == 2) continue;
                        if (c2 == 0 and c3 == 2 and now == 1) continue;
                        if (c2 == 1 and c3 == 0 and now == 2) continue;
                        if (c1 == 0 and c2 == 1 and now == 2) continue;
                        if (c1 == 0 and c3 == 1 and now == 2) continue;
                        memo[index+1][c2][c3][now] += memo[index][c1][c2][c3];
                        memo[index+1][c2][c3][now] %= MOD;
                    }
                }
            }
        }
    }

    ll sum = 0;
    for (int c1 = 0; c1 < 4; c1++)
    {
        for (int c2 = 0; c2 < 4; c2++)
        {
            for (int c3 = 0; c3 < 4; c3++)
            {
                sum += memo[N][c1][c2][c3];
                sum %= MOD;
            }
        }
    }

    cout << sum << endl;
}