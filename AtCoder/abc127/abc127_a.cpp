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
    int A, B;
    cin >> A >> B;

    if (A <= 5)
    {
        cout << 0 << endl;
    }
    else if ( 6<= A and A <= 12)
    {
        cout << B/2 << endl;
    }
    else
    {
        cout << B << endl;
    }
}