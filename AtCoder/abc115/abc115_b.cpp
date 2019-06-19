#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N;
    cin >> N;

    int p[N];

    REP(i, N)
    {
        cin >> p[i];
    }

    sort(p, p+N);

    int sum=p[N-1]/2;

    REP(i, N-1)
    {
        sum += p[i];
    }

    cout << sum << endl;

}