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
    int N, M;
    cin >> N >> M;

    long student_x[51], student_y[51];
    long checkpoint_x[51], checkpoint_y[51];

    REP(i, N)
    {
        /* code */
        cin >> student_x[i] >> student_y[i];
    }
    REP(i, M)
    {
        cin >> checkpoint_x[i] >> checkpoint_y[i];
    }

    REP(index, N)
    {
        long d_min = 1e9;
        int index_min;
        REP(i, M)
        {
            long d_temp = abs(student_x[index] - checkpoint_x[i]) + abs(student_y[index] - checkpoint_y[i]);
            if (d_min > d_temp)
            {
                d_min = d_temp;
                index_min = i;
            }
        }

        cout << index_min + 1 << endl;
    }
    
    
}