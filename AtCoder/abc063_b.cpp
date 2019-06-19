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

    bool over = false;
    int count[99999] = {0};
    for(int i = 0; i < S.size(); i++)
    {
        if (++count[S[i]] > 1)
        {
            over = true;
        }
    }
    if (over)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
    
}