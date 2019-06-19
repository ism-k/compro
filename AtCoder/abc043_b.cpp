#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string s;
    cin >> s;

    string ans;

    for(size_t i = 0; i < s.size(); i++)
    {
        char key = s[i];
        if (key == '0')
        {
            //ans.push_back('0');
            ans += '0';
        }
        else if(key == '1')
        {
            //ans.push_back('1');
            ans += '1';
        }
        else
        {
            if (ans.size() != 0)
                ans.pop_back();
        }
    }
    

    cout << ans << endl;
}