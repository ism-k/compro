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
    int N;
    cin >> N;

    vector<ll> L;
    L.push_back(2);
    L.push_back(1);
    for (int i = 2; i < N+1; i++)
    {
        L.push_back(L[i-2] + L[i-1]);
    }

    cout << L[N] << endl;
}