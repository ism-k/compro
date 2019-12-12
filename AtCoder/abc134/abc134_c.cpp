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
  int N;
  cin >> N;

  priority_queue<pair<int, int>> queue;
  for (int i = 0; i < N; i++)
  {
    int temp;
    cin >> temp;
    queue.push(make_pair(temp, i));
  }
  
  pair<int, int> p = queue.top();
  int max_value = p.first;
  int max_index = p.second;
  queue.pop();

  pair<int, int> semi = queue.top();
  int semi_value = semi.first;

  for (int i = 0; i < N; i++)
  {
    if (i == max_index)
      cout << semi_value << endl;
    else
      cout << max_value << endl;  
      
  }
  
  

}