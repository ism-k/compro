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
    int N;
    cin >> N;

    int ans;
    if (1<= N and N < 2)
        ans = 1;
    else if (2<= N and N < 4)
        ans = 2;
    else if (4 <= N and N < 8)
        ans = 4;
    else if (8 <= N and N < 16)
        ans = 8;
    else if (16 <= N and N < 32)
        ans = 16;
    else if (32 <= N and N < 64)
        ans = 32;
    else if (64 <= N)
        ans = 64;
    
    cout << ans << endl;
}