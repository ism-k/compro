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
    int H, W;
    cin >> H >> W;

    

    for(int i = 0; i < H; i++)
    {
        string C;
        for(int j = 0; j < W; j++)
        {
            char temp;
            cin >> temp;
            C += temp;
        }

        cout << C << endl;
        cout << C << endl;
        
    }
}