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

    char a[H+2][W+2];
    for(int height = 0; height < H+2; height++)
    {
        for(int width = 0; width < W+2; width++)
        {
            if (height == 0 or height == H+1)
            {
                cout << '#';
                if (width == W+1)
                {
                    cout << endl;
                }
            }
            else if (width == 0 or width == W+1)
            {
                cout << '#';
                if (width == W+1)
                {
                    cout << endl;
                }
            }
            else
            {
                char temp;
                cin >> temp;
                cout << temp;
            }
            
        }
        
    }
    
}