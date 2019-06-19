#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N; cin >> N;

    long A[N];
    int bucket[N];
    int power[N];
    long count = 0;
    REP(i, N)
    {
        cin >> A[i];
        bucket[i] = 0;
    }

    sort(A, A+N);

    REP(i, N)
    {
        if (bucket[i] == 0)
        {

            

        }
    }

    cout << count << endl;
}