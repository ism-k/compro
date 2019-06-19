#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    long N;
    long Cap[7]={0};
    cin >> N >> Cap[2] >> Cap[3] >> Cap[4] >> Cap[5] >> Cap[6];

    long num[7] ={0};
    num[1] = N;
    long dif[7];
    long Time = 0;

    while(num[6] != N)
    {
        int min = 6;
        int max = 0;
        int search[6] ={0};
        for(int i= 1; i < 6; i++)
        {
            if(num[i] != 0)
            {
                if(min > i)
                {
                    min = i;
                }
                if(max < i)
                {
                    max = i;
                }
            }
        }
        
        //cout << "min: " << min << ", max: " << max << endl;

        for(int city = min; city < max+1; city++)
        {
            //cout << "city: " << city << endl;
            dif[city] = Cap[city+1] - num[city];
            if (dif[city] < 0) // Cap[city] < num[city-1]
            {
                num[city] = abs(dif[city]);
                num[city+1] += Cap[city+1];
            }
            else // Cap[city] >= num[city-1]
            {
                num[city+1] += num[city];
                num[city] -= num[city];
            }
            
            //cout << "num[city]: " << num[city] << ", num[city+1]: " << num[city+1] << endl;
        }
        


        Time++;
    }
    

    cout << Time << endl;
}