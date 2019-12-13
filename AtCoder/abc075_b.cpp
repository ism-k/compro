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
    int H, W;
    cin >> H >> W;
    
    vector<string> S;
    for (int row=1; row <= H; row++)
    {
        string s_i;
        cin >> s_i;
        S.push_back(s_i);
    }
    vector<string> ans(S);

    for (int row = 1; row <= H; row++)
    {
        for (int col = 1; col <= W; col++)
        {
            int count = 0;
            if (S[row-1][col-1] == '.')
            {
                if (row != 1)
                {
                    if (S[row-1-1][col-1] == '#')
                        count++;

                    if (col != 1)
                    {
                        if (S[row-1-1][col-1-1] == '#')
                            count++;
                    }
                    if (col != W)
                    {
                        if (S[row-1-1][col-1+1] == '#')
                            count++;
                    }
                }
                if (row != H)
                {
                    if (S[row-1+1][col-1] == '#')
                        count++;

                    if (col != 1)
                    {
                        if (S[row-1+1][col-1-1] == '#')
                            count++;
                    }
                    if (col != W)
                    {
                        if (S[row-1+1][col-1+1] == '#')
                            count++;
                    }
                }
                if (col != 1)
                {
                    if (S[row-1][col-1-1] == '#')
                        count++;
                }
                if (col != W)
                {
                    if (S[row-1][col-1+1] == '#')
                        count++;
                }
                ans[row-1][col-1] = '0' + count;
            }
        }
    }
    
    for (int row = 1; row <= H; row++)
    {
        for (int col = 1; col <= W; col++)
        {
            cout << ans[row-1][col-1];
        }
        cout << endl;
    }
}