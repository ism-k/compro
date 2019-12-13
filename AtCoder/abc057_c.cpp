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

ll digits(ll num)
{
    ll count = 0;
    while (num !=0)
    {
        num /= 10;
        count++;
    }
    return count;
}

ll f(ll A, ll B)
{
    return max(digits(A), digits(B));
}

int main()
{
    ll N;
    cin >> N;

    ll rootN = sqrt(N);
    
    ll ans = digits(N);
    for (ll A = 1; A <= rootN; A++)
    {
        if (N % A != 0)
            continue;
        
        ll B = N / A;
        ans = min(ans, f(A, B));
    }
    cout << ans << endl;
}