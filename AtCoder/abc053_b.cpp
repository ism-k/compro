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
    string s;
    cin >> s;

    int index_A=-1;
    int index_Z=-1;

    for(int  i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' and index_A == -1)
        {
            index_A = i;
        }
        else if (s[i] == 'Z' and index_A != -1)
        {
            index_Z = i;
        }
        
    }

    cout << index_Z - index_A + 1 << endl;
    
}