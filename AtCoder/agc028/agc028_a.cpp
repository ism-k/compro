#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N, M;
    cin >> N >> M;
    string S; cin >> S;
    string T; cin >> T;

    bool flag = false;

    if (S[0] == T[0])
    {
        int l = lcm(N, M);
        int g = gcd(N, M);

        int n = N/g;
        int m = M/g;

        REP(k, g-1)
        {
            int a = k*n;
            int b = k*m;
            if (S[a] == T[b])
            {

            }
            else
            {
                flag = false;
            }
        }
    }

    if (flag)
    {
        cout << lcm(N, M) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}