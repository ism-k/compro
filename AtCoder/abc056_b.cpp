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
    long W, a, b;
    cin >> W >> a >> b;

    long left_one = a, right_one = a+W;
    long left_two = b, right_two = b+W;

    long ans;
    if(right_one < left_two or left_one > right_two)
    {
        ans = min(abs(right_one - left_two), abs(left_one - right_two));
    }
    else
    {
        ans = 0;
    }

    cout << ans << endl;
    
}