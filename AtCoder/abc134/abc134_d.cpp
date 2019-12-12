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

typedef pair<int, int> P;

int main()
{
    int N;
    cin >> N;

    vector<ll> A(N+1, 0);
    vector<ll> acc(N+2, 0);
    REP(i, N)
    {
        cin >> A[i+1];
        acc[i+1] = acc[i] + A[i+1];
    }
    A[0] = A[N];

    vector<ll> X(N+1, 0);
    X[1] = acc[N];
    for (int i = 2; i < N; i++)
    {
        if (i % 2 == 0)
        {
            X[1] -= 2*A[i];
        }
    }
    for (int index = 1; index <= N; index++)
    {
        cout << X[index] << " ";
        X[index+1] = 2 * A[index] - X[index];
    }
    cout << endl;
}