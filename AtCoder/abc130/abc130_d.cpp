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
    ll N, K;
    cin >> N >> K;

    // vector<ll> a(N,0);
    vector<ll> acc(N+1, 0);
    REP(i, N)
    {
        int temp;
        // cin >> a[i];
        cin >> temp;
        acc[i+1] = temp + acc[i];
        // cout << acc[i+1] << " ";
    }
    // cout << endl;

    ll count = 0;
    // for (int left = 0; left <= N; left++)
    // {
    //     for (int right=N; right >= left; right--)
    //     {
    //         if (acc[right] < K)
    //             break;
    //         ll sum = acc[right] - acc[left];
    //         // cout << left << ", " << right << ": "<< sum << endl;
    //         if (sum < K)
    //         {
    //             break;
    //         }
    //         count++;
    //     }
    // }
    for (int right = N; right >= 0; right--)
    {
        if (acc[right] < K)
            break;
        for (int left=right-1; left >= 0; left--)
        {
            ll sum = acc[right] - acc[left];
            // cout << left << ", " << right << ": "<< sum << endl;
            if (sum >= K)
            {
                count += left+1;
                break;
            }
        }
    }

    cout << count << endl;
}