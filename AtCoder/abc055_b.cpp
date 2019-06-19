#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    ll N;
    cin >> N;
    
    ll power = 1;
    for(ll i = 1; i <= N; i++)
    {
        power = (power * i) % (long)(1e9 + 7);
    }

    cout << power << endl;
    
}