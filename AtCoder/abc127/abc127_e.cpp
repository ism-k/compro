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

#define DIV ll(1e9+7)

int main()
{
    int N, M;
    ll K;
    cin >> N >> M >> K;
    ll all_grid = N*M;
    ll sum = 0;
    int x_end = M-1;
    int y_end = N-1;
    for (int row = 0; row < N; row++)
    {
        for (int col = row; col < M; col++)
        {
            int y = row;
            int x = col;

            ll left_grid = all_grid - (row+K-1)*(col+K-1);
            ll min_d = (K-1);
            ll cost;

            if (row == col) // diagonal elements 
            {
                
            }
            else
            {
                
            }
            
        }
    }

}