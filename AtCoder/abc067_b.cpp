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

    int l[N];
    REP(i, N)
    {
        cin >> l[i];
    }
    sort(l, l+N);
    
    int sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += l[N-1-i];
    }

    cout << sum << endl;
}