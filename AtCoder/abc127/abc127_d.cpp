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

// typedef pair<int, int> BC;
// bool pairCompare(const BC& firstElof, const BC& secondElof)
// {
//     return firstElof.second > secondElof.second;
// }

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    REP(i, N) cin >> A[i];
    // vector<int> B(M), C(M);
    // int iter_max_C;
    // int max_C=1;
    // vector<pair<int, int>> BC;
    priority_queue<pair<int, int>> q;
    // vector<BC> v;
    REP(i, M)
    {
        int B, C;
        cin >> B >> C;
        //v.emplace_back(make_pair(B, C));
        q.emplace(make_pair(C, B));
    }
    //sort(v.begin(), v.end(), pairCompare);

    sort(A.begin(), A.end());
    int iter = 0;
    while (1)
    {
        if (q.empty())
            break;
        pair<int, int> temp = q.top();
        q.pop();
        //v.pop_back();
        int C = temp.first, B = temp.second;
        if (A[iter] >= C)
            break;
        for (int i = 0; i < B; i++)
        {
            if (A[iter] < C)
            {
                A[iter] = C;
                iter++;
            }
        }
    }

    ll sum = 0;
    for (int i = 0; i < A.size(); i++)
        sum += A[i];
    
    cout << sum << endl;
}