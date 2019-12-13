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

int main()
{
    int N, M;
    cin >> N >> M;
    vector<ll> A;
    priority_queue<ll> queue;
    for (int i = 0; i < N; i++)
    {
        ll temp;
        cin >> temp;
        queue.push(temp);
    }

    for (int count=0; count < M; count++)
    {
        int max = queue.top();
        queue.pop();
        queue.push(max / 2);
    }

    ll sum = 0;
    while (!queue.empty())
    {
        ll temp = queue.top();
        sum += temp;
        queue.pop();
    }
    
    cout << sum << endl;
}