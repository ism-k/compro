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
    long N; cin >> N;
    string S; cin >> S;

    long count_white = 0;
    for(int i = 0; i < S.size(); i++)
    {
        if (S[i] == '.')
            count_white++;
    }
    
    long count_black = 0;
    long count_min = count_white;
    for(long borderline = 0; borderline < S.size(); borderline++)
    {
        if (S[borderline] == '.')
        {
            count_white--;
        }
        else if (S[borderline] == '#')
        {
            count_black++;
        }

        if (count_min > (count_white + count_black))
        {
            count_min = count_white + count_black;
        }

    }
    cout << count_min << endl;
}