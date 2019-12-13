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

bool checkExist(char c, string S)
{
    for (int index=0; index < (int)S.size(); index++)
    {
        if (c == S[index])
            return true;
    }

    return false;
}

int main()
{
    string S;
    cin >> S;

    sort(S.begin(), S.end());
    bool found = false;
    for (char c='a'; c < 'z'+1; c++)
    {
        if (!checkExist(c, S))
        {
            found = true;
            cout << c << endl;
            break;
        }
    }
    if (!found)
        cout << "None" << endl;
}