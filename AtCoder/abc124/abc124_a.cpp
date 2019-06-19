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
    int A, B;
    cin >> A >> B;
    if (A == B)
    {
        cout << 2*max(A, B) << endl;
    }
    else
    {
        cout << 2*max(A, B) -1 << endl;
    }
}