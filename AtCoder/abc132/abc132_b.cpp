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
    int n;
    cin >> n;

    vector<int> p;
    REP(i, n)
    {
        int temp;
        cin >> temp;
        p.emplace_back(temp);
    }

    int count = 0;
    REP(i, n-2)
    {
        int p1 = p[i];
        int p2 = p[i+1];
        int p3 = p[i+2];

        if (p1 < p2 and p2 < p3)
            count++;
        else if (p3 < p2 and p2 < p1)
            count++;
    }

    cout << count << endl;
}