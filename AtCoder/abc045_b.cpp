#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    string ans;

    char next = sa[0];
    sa.erase(0,1);

    while(1){
        if (next == 'a')
        {
            if(sa.size()==0)
            {
                ans = 'A';
                break;
            }
            else
            {
                next = sa[0];
                sa.erase(0,1);
            }
        }
        else if(next == 'b')
        {
            if(sb.size()==0)
            {
                ans = 'B';
                break;
            }
            else
            {
                next = sb[0];
                sb.erase(0,1);
            }
        }
        else if(next == 'c')
        {
            if(sc.size()==0)
            {
                ans = 'C';
                break;
            }
            else
            {
                next = sc[0];
                sc.erase(0,1);
            }
        }
    }
    
    cout << ans << endl;
}