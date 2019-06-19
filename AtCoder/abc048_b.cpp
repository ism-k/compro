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
    long a, b, x;
    cin >> a >> b >> x;

    long first = a;
    if (first % x != 0)
    {
        first += x - a%x;
    }
    long end   = b - (b%x);

    long count = (end - first) / x + 1;

    cout << count << endl;
}