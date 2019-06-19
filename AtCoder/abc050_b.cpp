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
    int N;
    cin >> N;
    int Time[N];
    long sum = 0;
    REP(i, N)
    {
        cin >> Time[i];
        sum += Time[i];
    }
    int M;
    cin >> M;
    int Problem[M], xTime[M];
    REP(i, M)
    {
        cin >> Problem[i] >> xTime[i];
        cout << sum - Time[Problem[i]-1] + xTime[i] << endl;
    }
}