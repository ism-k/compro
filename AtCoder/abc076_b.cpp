#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N, K;
    cin >> N >> K;

    int ans = 1;
    for (int i = 0; i < N; i++)
    {
        ans = min(2*ans, ans+K);
    }
    cout << ans << endl;
}