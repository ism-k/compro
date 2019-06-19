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
    int X, A;
    cin >> X >> A;

    if (X < A)
    {
        cout << 0 << endl;
    }
    else if (X >= A)
    {
        cout << 10 << endl;
    }
}