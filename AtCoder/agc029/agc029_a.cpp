#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string S; cin >> S;

    //int white = 0;
    //int black = 0;

    /*REP(i, S.length())
    {
        if (S[i] == 'B')
        {
            black++;
        }
        else
        {
            white++;
        }
    }*/

    //cout << "Black: " << black;
    //cout << ", White: " << white << endl;

    //int index_w = 0;
    int black = 0;
    long max = 0;
    REP(i, S.length())
    {
        if (S[i] == 'W')
        {
            max += black;
            /*max += i - index_w;
            index_w++;*/
        }
        else if (S[i] == 'B')
        {
            black++;
        }
    }

    cout << max << endl;
}