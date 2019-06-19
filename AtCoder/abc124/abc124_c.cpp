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
    string S;
    cin >> S;

    long odd=0, even=0;
    REP(i, S.size())
    {
        if (i % 2 == 0)
        {
            if(S[i] == '0')
            {
                odd++;
            }
            else
            {
                even++;
            }
            
        }
        else
        {
            if(S[i] == '0')
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    cout << min(odd, even) << endl;
}