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
    bool YYMM = false;
    bool MMYY = false;

    string front;
    front.push_back(S[0]);
    front.push_back(S[1]);
    string end;
    end.push_back(S[2]);
    end.push_back(S[3]);

    // MMYY
    if ( front >=  "01" and front <= "12")
    {
        
        MMYY = true;
    }
    // YYMM
    if ( end >= "01" and end <= "12")
    {
        YYMM = true;
    }

    if (YYMM and MMYY)
        cout << "AMBIGUOUS" << endl;
    else if (YYMM)
        cout << "YYMM" << endl;
    else if (MMYY)
        cout << "MMYY" << endl;
    else 
        cout << "NA" << endl;
}