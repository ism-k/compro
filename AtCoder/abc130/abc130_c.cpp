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
#include <iomanip>
#include <limits>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    // std::cout<<std::fixed<<std::setprecision(6);
    // std::cout << std::defaultfloat;
    double W, H, x, y;
    cin >> W >> H >> x >> y;

    cout << (double)H*(double)W/2.0 << " ";
    cout << (x+x == W and y+y == H) << endl;
}