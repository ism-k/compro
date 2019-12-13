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
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int temp_l, temp_r;
        cin >> temp_l >> temp_r;

        sum += (temp_r - temp_l + 1);
    }

    cout << sum << endl;
}