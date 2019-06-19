#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    string ans;

    if (e - a > k)
    {
        ans = ":(";
    }
    else
    {
        ans = "Yay!";
    }
    
    cout <<  ans << endl;
}