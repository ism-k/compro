// https://onlinejudge.u-aizu.ac.jp/#/problems/1378

#include <bits/stdc++.h>
using namespace std;

long int comb[110][10] = {0};

int main()
{
    for (int hight = 1; hight < 101; hight++)
    {

        for (int thickness = 2; thickness < 11; thickness++)
        {
            if (hight < thickness)
            {
                comb[hight][thickness] = (hight + 1) / 2;
            }
            else if (hight <= thickness + 1)
            {
                if (hight == 2)
                    comb[2][2] = 2;
                else
                {
                    comb[hight][thickness] = 2 + comb[hight - 2][thickness];
                }
            }
            else // thickness + 1 < hight
            {
                comb[hight][thickness] = 2 + comb[hight - 2][thickness] + comb[hight - thickness - 1][thickness];
            }
        }
    }

    int l, k;
    std::cin >> l >> k;

    std::cout << comb[l][k] << std::endl;

    return 0;
}

/*

動的計画法で解いた．
最初にcombなる(l, k)ごとの組み合わせの数を保存する配列を作ってやり，それを小さい順に埋めていく．
(2, 2)のときを綺麗に与えられなかったのでcomb[2][2] = 2;などとしているのが泥臭い．

*/