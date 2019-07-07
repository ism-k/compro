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

int main()
{
    int N, D;
    cin >> N >> D;

    vector<vector<int>> X(N, vector<int>(D, 0));

    REP(row, N)
    {
        REP(col, D)
        {
            int x;
            cin >> x;
            X[row][col] = x;
        }
    }

    int count = 0;
    REP(i, N)
    {
        for (int j = i+1; j < N; j++)
        {
            double d_ij = 0.0;
            REP(index, D)
                d_ij += (X[i][index] - X[j][index]) * (X[i][index] - X[j][index]);
            
            d_ij = sqrt(d_ij);

            if ( ceil(d_ij) == floor(d_ij) )
                count++;
        }
    }

    cout << count << endl;
}