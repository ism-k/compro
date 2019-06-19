#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    int N, K;
    cin >> N >> K;

    int h[N];

    REP(i, N)
        cin >> h[i];

    sort(h, h+N);

    int min = h[N-1];

    REP(index, N-K+1)
    {
        //cout << "index : " << index;
        int h_min = h[index]; //cout << " h_min: " << h_min;
        int h_max = h[index+K-1]; //cout << " h_max: " << h_max;
        int temp = h_max - h_min; //cout << " temp: " << temp << endl;;

        if (temp < min)
        {
            min = temp;
        }
    }

    cout << min << endl;
}