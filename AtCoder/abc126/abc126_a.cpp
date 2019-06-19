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
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    S[K-1] = S[K-1] - ('A' - 'a');
    cout << S << endl;
}