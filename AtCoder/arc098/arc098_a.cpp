#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <numeric>
#include <array>
#include <queue>
#include <set>
#include <iomanip>
#include <limits>
#include <type_traits>
using namespace std;
using ll = long long int;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
  ll N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> nums;
  char now = S[0];
  if (now == 'W')
    nums.push_back(0);
  int count = 1;
  for (int index = 1; index < S.size(); index++)
  {
    if (S[index] == now) 
    {
      count++;
    }
    else
    {
      nums.push_back(count);
      now = S[index];
      count = 1;
    }

    if (index == S.size()-1)
    {
      nums.push_back(count);
    }

    if (index == S.size()-1 && S[index] == 'W')
    {
      nums.push_back(0);
    }
  }

  vector<int> acc(nums.size(), 0);
  vector<int> acc_W(nums.size(), 0);
  vector<int> acc_E(nums.size(), 0);
  for (int index = 1; index < nums.size(); index++)
  {
    acc[index] = acc[index-1] + nums[index];
    if (index%2 == 0)
    {
      acc_E[index] = acc_E[index-1] + nums[index];
      acc_W[index] = acc_W[index-1];
    }
    else
    {
      acc_E[index] = acc_E[index-1];
      acc_W[index] = acc_W[index-1] + nums[index];
    }
  }

  // for(auto iter : acc_E)
  // {
  //   cout << iter;
  // } cout << endl;
  // for(auto iter : acc_W)
  // {
  //   cout << iter;
  // }

  int min = 1e9;
  int cost = 0;
  for (int index = 0; index < acc.size(); index++)
  {
    cost = 0;
    // left
    cost += acc_W[index];
    // right
    cost += (acc_E.back() - acc_E[index]);

    chmin(min, cost);
  }
  
  cout << min << endl;
}