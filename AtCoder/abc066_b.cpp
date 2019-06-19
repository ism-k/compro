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

    int ans;
    for(int i = 2; i < S.size(); i+=2)
    {
        string copy = S;
        for(int j = 0; j < i; j++)
        {
            copy.pop_back();
        }

        string half1, half2;
        for(int j = 0; j < copy.size(); j++)
        {
            if (j < copy.size()/2)
                half1.push_back(copy[j]);
            else
                half2.push_back(copy[j]);
        }
        if (half1 == half2)
        {
            ans = copy.size();
            break;
        }
    }
    cout << ans << endl;
    
}