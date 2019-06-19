#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <numeric>
#include <array>
#include <queue>
#include <set>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)
    
// typedef pair<int, int> BC;
// bool pairCompare(const BC& firstElof, const BC& secondElof)
// {
//     return firstElof.second > secondElof.second;
// }
    
int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    // queue<tuple<int, int>> ex;
    queue<pair<int, int>> ex;
    vector<vector<int>> L(H, vector<int>(W, 0));
    vector<vector<int>> R(H, vector<int>(W, 0));
    vector<vector<int>> U(H, vector<int>(W, 0));
    vector<vector<int>> D(H, vector<int>(W, 0));
    
    REP(i, H)
    {
        cin >> S[i];
        for (int j=0; j < W; j++)
        {
            int wall = 0;
            if (S[i][j] == '.')
            {
                if (j == 0)
                {
                    L[i][j] = 1;
                }
                else if (i > 0)
                {
                    L[i][j] = L[i][j-1] + 1;
                }

                if (i == 0)
                {
                    U[i][j] = 1;
                }
                else if (j > 0)
                {
                    U[i][j] = U[i-1][j] + 1;
                }
            }
            else if (S[i][j] == '#')
            {
                L[i][j] = 0;
                U[i][j] = 0;

                
            }
        }
    }
    
    
    
}