#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;

    int c[N], t[N];
    int min_time = T;
    int min_cost = 1000;
    bool flag = false;
    for(size_t i = 0; i < N; i++)
    {
        cin >> c[i] >> t[i];
        if (t[i] <= T)
        {
            flag = true;
            if (c[i] < min_cost)
            {
                min_cost = c[i];
            }
        }
    }

    if (flag)
    {
        cout << min_cost << endl;
    }
    else
    {
        cout << "TLE" << endl;
    }

    return 0;
    
}