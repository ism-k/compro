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
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    string S_prime, T;
    cin >> S_prime >> T;
    string S = S_prime;

    priority_queue<string, vector<string>, greater<string>> q;
    for (int index=0; index <= (int)S_prime.size() - (int)T.size(); index++)
    {
        bool found = false;
        // Tの頭の文字と一致 or '?'なら詳しく調査開始
        if (S_prime[index] == T[0] || S_prime[index] == '?')
        {
            S = S_prime;

            // 探索範囲外の'?'は全部'a'に置換
            for (int replace_index=0; replace_index < (int)S_prime.size(); replace_index++)
            {
                if (S[replace_index] == '?')
                {
                    if (replace_index < index || index + (int)T.size() <= replace_index)
                    {
                        S[replace_index] = 'a';
                    }
                }
            }
            
            // 被らないと明らかにわかる文字が見つかるまで探索してみる
            for (int check_index=0; check_index < (int)T.size(); check_index++)
            {
                // 一致せず'?'でもない部分があれば終わり
                if (S_prime[index + check_index] != T[check_index] && S_prime[index + check_index] != '?')
                    break;
                
                // 探索範囲内の'?'は該当するTの文字に置き換え
                if (S_prime[index + check_index] == '?')
                {
                    S[index + check_index] = T[check_index];
                }

                // 最後まで探索し終えた（完全に一致した）ならそれは解候補になる
                if (check_index == (int)T.size() - 1)
                {
                    found = true;
                }
            }

            // 解候補になるならキューに入れておく
            if (found)
            {
                q.push(S);
            }
        }
    }

    if (q.empty())
    {
        cout << "UNRESTORABLE" << endl;
    }
    else
    {
        string answer = q.top();
        cout << answer << endl;
    }
    
}