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
    int N, X;
    cin >> N >> X;
    vector<int> L(N+3);

    vector<int> D(N+3, 0);
    int count = 1;
    REP(i, N)
    {
        cin >> L[i];
        D[i+1] = D[i] + L[i];
        if (D[i+1] <= X)
        {
            count++;
        }
    }

    cout << count << endl;

}