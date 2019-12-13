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
    int N, K;
    cin >> N >> K;

    int sum = 0;
    for (int y = 1; y <= N; y++)
    {
        int x;
        cin >> x;
        sum += 2 * min(x, K-x);
    }

    cout << sum << endl;
}