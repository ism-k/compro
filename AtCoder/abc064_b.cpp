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

    vector<int> point;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        point.push_back(temp);
    }
    sort(point.begin(), point.end());

    cout << point[N-1] - point[0] << endl;
}