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
    int N;
    cin >> N;
    string S;
    cin >> S;

    int x = 0;
    int max_x = 0;;
    for(int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'I')
        {
            x++;
            if (max_x < x)
            {
                max_x = x;
            }
        }
        else if (S[i] == 'D')
        {
            x--;
        }
        
    }

    cout << max_x << endl;
    
}