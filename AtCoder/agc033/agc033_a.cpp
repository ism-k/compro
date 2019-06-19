#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int H, W;
    cin >> H >> W;
    vector<vector<int>> memo(1010, vector<int>(1010));
    queue<pair<int, int>> points;
    for(int row = 0; row < H; row++)
    {
        for(int col = 0; col < W; col++)
        {
            char c;
            cin >> c;
            memo[row][col] = -1;
            if (c == '#')
            {
                points.emplace(pair<int, int>(row, col));
                memo[row][col] = 0;
            }
        }
    }

    long max=-1;
    while(!points.empty())
    {
        pair<int, int> searching = points.front();
        points.pop();
        int row = searching.first;
        int col = searching.second;
        //cout << "Searching: (" << row << ", " << col << ") | ";
        int now = memo[row][col];
        //cout << "now: " << now << endl;
        if (max < now)
            max = now;
        if (row > 0)
        {
            if (memo[row-1][col] == -1)
            {
                points.emplace(pair<int, int>(row-1, col));
                memo[row-1][col] = now+1;
            }
        }
        if (row < H)
        {
            if (memo[row+1][col] == -1)
            {
                points.emplace(pair<int, int>(row+1, col));
                memo[row+1][col] = now+1;
            }
        }
        if (col > 0)
        {
            if (memo[row][col-1] == -1)
            {
                points.emplace(pair<int, int>(row, col-1));
                memo[row][col-1] = now+1;
            }
        }
        if (col < W)
        {
            if (memo[row][col+1] == -1)
            {
                points.emplace(pair<int, int>(row, col+1));
                memo[row][col+1] = now+1;
            }
        }
    }
    
    cout << max << endl;
}