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
    string O, E;
    cin >> O;
    cin >> E;
    
    string pass="";

    for(int i = 0; i < E.size(); i++)
    {
        /* code */
        pass += O[i];
        pass += E[i];

        if (i == E.size()-1 and O.size() != E.size())
        {
            pass += O[i+1];
        }
    }

    cout << pass << endl;
    
}