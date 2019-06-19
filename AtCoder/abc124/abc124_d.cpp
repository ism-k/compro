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

int main()
{
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> div;
    int now=1;
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if (S[i] == (char)('0' + now))
            count++;
        else
        {
            div.push_back(count);
            now ^= 1;
            count = 1;
        }
    }
    if (count != 0) div.push_back(count);
    if (div.size() % 2 == 0) div.push_back(0);
    
    vector<int> acc(div.size() + 1);
    for(int i = 0; i < div.size(); i++)
    {
        acc[i+1] = acc[i] + div[i];
    }
    
    int Add = 2*K+1;
    int ans = 0;
    for(int i = 0; i < div.size(); i+=2)
    {
        int left = i;
        int right = min(i+Add, (int)div.size());
        int temp = acc[right] - acc[left];
        ans = max(ans, temp);
    }
    cout << ans << endl;
}
