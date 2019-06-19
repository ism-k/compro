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
    int N;
    cin >> N;

    vector<int> W(N);
    int sum = 0;
    REP(i, N)
    {
        cin >> W[i];
        sum += W[i];
    }
    
    int abs_min = int(1e9);
    for (int T=0; T < W.size(); T++)
    {
        int S1=0;
        for (int i=0; i < T; i++)
        {
            S1 += W[i];
        }
        int S2 = sum - S1;
        abs_min = min(abs_min, abs(S1 - S2));
    }

    cout << abs_min << endl;
}