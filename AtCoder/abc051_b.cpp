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
    int K, S;
    cin >> K >> S;

    int count = 0;
    for(int x = 0; x < K+1; x++)
    {
        for(int y = 0; y < K+1; y++)
        {
            int z = S - x - y;
            if (z >= 0 and z <= K)
            {
                count++;
            }
        }
        
    }
    cout << count << endl;
}