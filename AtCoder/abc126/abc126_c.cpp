#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    long N, K;
    cin >> N >> K;

    // long N_log2 = (long)log2(N);
    // long K_long2 = (long)log2(K);
    double prob = 0;
    for (long val = 1; val < N+1; val++)
    {
        // cout << val << "   ";
        double prob_temp = 1/(double)N;
        //prob_temp = 1/N;

        long val_temp = val;
        while (val_temp < K)
        {
            val_temp  *= 2;
            prob_temp /= 2.0;
        }
        prob += prob_temp;
        // cout << prob << endl;
    }
    
    cout << std::setprecision(12) << prob << endl;
}