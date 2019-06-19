#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A < B)
    {
        if (C < B and A < C)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    else if (A > B)
    {
        if (B < C and C < A)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    
}