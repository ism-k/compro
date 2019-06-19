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
    int A, B, C;
    cin >> A >> B >> C;

    bool exist = false;
    for(ll i = 1; i < A*B*C; i++)
    {
        if ( (A*i - C)%B == 0 )
        {
            exist = true;
        }
    }
    
    if (exist)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}