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
    int N, K;
    cin >> N >> K;

    long ans;
    
    ans = K * pow(K-1, N-1);

    cout << ans << endl;
}