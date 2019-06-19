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
    int X, Y, Z, K;
    cin >> X >> Y >> Z >> K;

    vector<ll> A(X), B(Y), C(Z);
    REP(i, X) cin >> A[i];
    REP(i, Y) cin >> B[i];
    REP(i, Z) cin >> C[i];
    sort(A.begin(), A.end(), greater<ll>());
    sort(B.begin(), B.end(), greater<ll>());
    sort(C.begin(), C.end(), greater<ll>());

    priority_queue<tuple<li, int, int, int>> q;
    set<tuple<int, int, int>> b;
    q.push(make_tuple(A[0] + B[0] + C[0], 0, 0, 0));
    b.emplace(make_tuple(0, 0, 0));

    for (int i = 0; i < K; i++)
    {
        tuple<ll, int, int, int> temp;
        temp = q.top();
        cout << get<0>(temp) << endl;
        int min_x = get<1>(temp);
        int min_y = get<2>(temp);
        int min_z = get<3>(temp);
        tuple<int, int, int> x(min_x+1, min_y, min_z), y(min_x, min_y+1, min_z), z(min_x, min_y, min_z+1);
        q.pop();

        if (b.count(x) == 0 and min_x < X-1)
        {
            b.emplace(x);
            q.push(make_tuple(A[min_x+1] + B[min_y] + C[min_z], min_x+1, min_y, min_z));
        }
        if (b.count(y) == 0 and min_y < Y-1)
        {
            b.emplace(y);
            q.push(make_tuple(A[min_x] + B[min_y+1] + C[min_z], min_x, min_y+1, min_z));
        }
        if (b.count(z) == 0 and min_z < Z-1)
        {
            b.emplace(z);
            q.push(make_tuple(A[min_x] + B[min_y] + C[min_z+1], min_x, min_y, min_z+1));
        }
    }
}