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
    int N, M;
    cin >> N >> M;

    int count[N];
    for(int i = 0; i < N; i++)
    {
        count[i] = 0;
    }
    
    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        count[a-1]++;
        count[b-1]++;
    }

    for(int i = 0; i < N; i++)
    {
        cout << count[i] << endl;
    }
    
    
}