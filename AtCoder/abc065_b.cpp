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
    long N;
    cin >> N;

    vector<long> a;
    for(long i = 0; i < N; i++)
    {
        long temp;
        cin >> temp;
        a.push_back(temp);
    }
    
    long count = 0;
    bool found = false;
    long next = 1;
    while(count < N)
    {
        next = a[next-1];
        count++;
        if (next == 2)
        {
            found= true;
            break;
        }
        if (a[next-1] == next)
        {
            break;
        }
    }
    
    if (found)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
}