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
    string S;
    cin >> S;

    vector<int> memo(100, 0);
    REP(i, 4)
    {
        memo[S[i] - 'A']++;
    }

    bool ok = true;
    REP(i, 'Z'-'A'+1)
    {
        if (memo[i] != 0 and memo[i] != 2)
            ok = false;
        
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