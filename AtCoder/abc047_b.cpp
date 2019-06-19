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
    int W, H, N;
    cin >> W >> H >> N;

    int max_x=W, max_y=H, min_x=0, min_y=0;
    int x, y, a;
    REP(i, N)
    {
        cin >> x >> y >> a;

        if (a == 1)
        {
            min_x = max(x, min_x);
        }
        else if (a == 2)
        {
            max_x = min(x, max_x);
        }
        else if (a == 3)
        {
            min_y = max(y, min_y);
        }
        else if (a == 4)
        {
            max_y = min(y, max_y);
        }
    }

    int width = max_x - min_x;
    if (width < 0) width = 0;
    int height = max_y - min_y;
    if (height < 0) height = 0;

    cout << width*height << endl;
}