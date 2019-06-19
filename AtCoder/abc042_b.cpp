#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N, L;
    string S[110];
    vector<int> index;

    cin >> N >> L;

    REP(i, N)
    {
        cin >> S[i];
        index.push_back(i);
    }
    sort(S, S+N);


    string comb;
    for(auto i:index)
    {
        comb += S[i];
    }
    
    cout << comb << endl;
}