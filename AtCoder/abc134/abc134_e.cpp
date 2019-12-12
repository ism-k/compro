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
    int N;
    cin >> N;
    int K;
    cin >> K;

    int min_K = 0;
    int max_K = (N-1)*(N-2)/2;
    if (K >= min_K and K <= max_K)
    {
        int M = N*(N-1)/2 - K;
        cout << M << endl;
        for (int i = 2; i <= N; i++)
        {
            cout << 1 << " " << i << endl;
        }
        int count = N;
        for (int i = 2; i < N; i++)
        {
            if (count > M)
                break;
            for (int j = i+1; j <= N; j++)
            {
                if (count > M)
                    break;
                cout << i << " " << j << endl;
                count++;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }
    
}