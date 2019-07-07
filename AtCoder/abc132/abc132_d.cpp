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
    priority_queue<P, vector<P>, greater<P>> q;

    int N;
    cin >> N;

    REP(i, N)
    {
        int A, B;
        cin >> A >> B;
        q.emplace(make_pair(B, A));
    }

    ll right = 0, left = 0;
    bool ok = true;
    while (!q.empty())
    {
        pair<int, int> p = q.top();
        q.pop();
        int deadline = p.first;
        int time     = p.second;
        right = left + time;

        // cout << "(deadline, time): (" << deadline << ", " << time << ") | ";
        // cout << left << " to " << right << endl;

        if (right > deadline)
        {
            ok = false;
            break;
        }

        left = right;
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
}