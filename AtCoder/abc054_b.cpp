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
    int N, M;
    cin >> N >> M;
    string A[N], B[M];
    REP(i, N)
    {
        cin >> A[i];
    }
    REP(i, M)
    {
        cin >> B[i];
    }
    bool exist = false;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if (i+M-1 >= N or j+M-1 >= N) continue;
            
            bool match = true;
            for(int point_i = 0; point_i < M; point_i++)
            {
                for(int point_j = 0; point_j < M; point_j++)
                {
                    if (B[point_i][point_j] != A[i+point_i][j+point_j])
                    {
                        match = false;
                    }
                }
            }
            if(match) exist = true;
        }
    }
    
    if(exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    
}