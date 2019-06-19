#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> a(N);
    vector<vector<int>> cost(N);
    for (int i = 0; i < N-1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        a[u].emplace_back(v);
        cost[u].emplace_back(w);
        a[v].emplace_back(u);
        cost[v].emplace_back(w);
    }

    vector<int> ans(N, -1);
    queue<int> q;
    ans[0] = 0;
    q.push(0);

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i=0; i < a[v].size(); i++)
        {
            int u = a[v][i];
            int w = cost[v][i];

            if (ans[u] != -1)
                continue;
            ans[u] = (ans[v] + w) % 2;
            q.push(u);
        }
    }

    for (auto iter:ans)
    {
        cout << iter << endl;
    }
}