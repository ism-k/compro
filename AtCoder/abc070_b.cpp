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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int ans;
    if (D <= A)
    {
        ans=0;
    }
    else if (C <= A && D <= B)
    {
        ans = D-A;
    }
    else if (C<=A && B<=D)
    {
        ans = B-A;
    }
    else if (D <= B)
    {
        ans = D-C;
    }
    else if (C <=B && B <= D)
    {
        ans = B-C;
    }
    else if (B <= C)
    {
        ans = 0;
    }
    
    
    cout << ans << endl;
}