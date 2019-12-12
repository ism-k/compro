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
#include <iomanip>
#include <limits>
#include <type_traits>
using namespace std;
using ll = long long int;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
  ll L, R;
  cin >> L >> R;

  ll MOD = 2019;
  ll ans = 2019;

  if (R - L > 5000)
  {
    cout << 0 << endl;
  }
  else
  {
    for (ll i = L; i < R; i++)
    {
      for (ll j = i+1; j <= R; j++)
      {
        chmin(ans, i*j % MOD);
      }
    }

    cout << ans << endl;
  }
}