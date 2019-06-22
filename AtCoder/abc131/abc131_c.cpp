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
#define REP(i,n) for(int i=0;i<n;i++)

unsigned euclidean_gcd(unsigned a, unsigned b) {
  if(a < b) return euclidean_gcd(b, a);
  unsigned r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main()
{
    ll A, B;
    ll C, D;
    cin >> A >> B >> C >> D;

    ll number = B - A + 1;
    ll GCD = euclidean_gcd(C, D);
    ll LCM = C*D/GCD;
    // cout << LCM << endl;
    ll C_min, C_max, D_min, D_max, LCM_min, LCM_max;
    C_min = (A+(C-1)) / C;
    C_max = B / C;
    D_min = (A+(D-1)) / D;
    D_max = B / D;
    LCM_min = (A+(LCM-1)) / LCM;
    LCM_max = B / LCM;

    cout << number - (C_max - C_min + 1) - (D_max - D_min + 1) + (LCM_max - LCM_min + 1) << endl;
}