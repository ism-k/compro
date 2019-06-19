#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}

#define DIVIDE 998244353

int main()
{
    int N; cin >> N;
    vector<int> a;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    int seisankaku = 0;
    int nitouhen = 0;
    int other = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < N; i++)
    {
        int first = a[i];
        for(int j = i+1; j < N; j++)
        {
            int second = a[j];
            for(int k = j+1; k < N; k++)
            {
                int third = a[k];
                first = accumulate(a.begin(), a.begin()+j, 0);
                second = accumulate(a.begin()+j, a.begin()+k, 0);
                third = accumulate(a.begin()+k, a.end(), 0);
                //cout << "i, j, k: " << i << ", " << j << ", " << k << endl;
                //cout << "first, second, third: " << first << ", " << second << ", " << third << endl;
                if (first + second > third and second + third > first and third + first > second)
                {
                    if (first == second and second == third)
                    {
                        seisankaku = (seisankaku+1) % DIVIDE;
                    }
                    else if (first == second or second == third)
                    {
                        nitouhen = (nitouhen+1) % DIVIDE;
                    }
                    else
                    {
                        other = (other+1) % DIVIDE;
                    }
                }
            }  
        }
    }
    
    long long int sum;
    sum = (seisankaku + nitouhen + other)*6 % DIVIDE;

    cout << sum << endl;
}