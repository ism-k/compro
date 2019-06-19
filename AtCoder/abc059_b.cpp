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
    string A, B;
    cin >> A;
    cin >> B;

    if ( A.size() == B.size())
    {
        for(long i = 0; i < A.size(); i++)
        {
            if (A[i] > B[i]) 
            {
                cout << "GREATER" << endl;
                break;
            }
            else if (A[i] < B[i])
            {
                cout << "LESS" << endl;
                break;
            }
            
            if(i == A.size()-1)
            {
                cout << "EQUAL" << endl;
            }
        }
        
    }
    else if ( A.size() > B.size())
    {
        cout << "GREATER" << endl;
    }
    else
    {
        cout << "LESS" << endl;
    }
}