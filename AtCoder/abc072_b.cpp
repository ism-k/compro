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
    string S;
    cin >> S;

    for (int index = 1; index <= S.size(); index+=2)
    {
        cout << S[index-1];
    }
    cout << endl;
}