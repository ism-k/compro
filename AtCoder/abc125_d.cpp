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
    vector<int> A(N);
    vector<int> B(N);
    int cnt_minus = 0;
    REP(i, N)
    {
        cin >> A[i];
        B[i] = abs(A[i]);
        if (A[i] < 0)
        {
            cnt_minus++;
        }
    }
    sort(B.begin(), B.end());
    int min = B[0];
    long sum = 0;
    REP(i, N)
    {
        sum += B[i];
    }
    if (cnt_minus%2 != 0)
    {
        sum -= 2*min;
    }

    cout << sum << endl;
}