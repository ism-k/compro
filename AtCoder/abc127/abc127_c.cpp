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
    int N, M;
    cin >> N >> M;
    int L_max=1, R_min=N;

    REP(i, M)
    {
        int L, R;
        cin >> L >> R;
        if (L_max < L)
        {
            L_max = L;
        }
        if (R_min > R)
        {
            R_min = R;
        }
    }

    if (L_max > R_min)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << R_min - L_max + 1 << endl;
    }
}