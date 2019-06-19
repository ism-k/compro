#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string w;
    cin >> w;

    int count[9999] = {0};

    for(size_t index = 0; index < w.size(); index++)
    {
        /* code */
        char input = w[index];
        count[input]++;
    }

    bool ok = true;
    for(auto &i:w)
    {
        if (count[i]%2 == 0)
        {

        }
        else
        {
            ok = false;
        }
        
    }
    
    if (ok) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    
}