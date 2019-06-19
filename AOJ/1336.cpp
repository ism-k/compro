//https://onlinejudge.u-aizu.ac.jp/#/problems/1336

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_ant, length;

    while (1)
    {
        std::cin >> num_ant >> length;

        if (num_ant == 0 && length == 0)
            break;

        int direction[num_ant];
        int position[num_ant];
        char temp;
        int tag;

        // input
        for (int i = 0; i < num_ant; i++)
        {
            std::cin >> temp >> position[i];
            if (temp == 'R')
                direction[i] = 1;
            else
                direction[i] = -1;
        }

        // simulate
        bool goal[110] = {0};
        bool flag = false;
        int t = 0;

        while (!flag)
        {
            t++;
            int conflict[110] = {0};
            int point[110] = {0};
            flag = true;

            for (int j = 0; j < num_ant; j++)
            {
                if (goal[j] == false)
                {
                    position[j] += direction[j];

                    if (conflict[position[j]] != 0)
                    {
                        direction[j] *= -1;
                        direction[point[position[j]]] *= -1;
                    }
                    else
                    {
                        conflict[position[j]]++;
                        point[position[j]] = j;
                    }

                    if (position[j] == 0 || position[j] == length)
                    {
                        goal[j] = true;
                        if (position[j] == 0)
                        {
                            tag = j;
                        }
                        else if (position[j] == length && conflict[0] == 0)
                        {
                            tag = j;
                        }
                    }
                }
            }

            // confirming
            for (int k = 0; k < num_ant; k++)
            {
                if (goal[k] != true)
                    flag = false;
            }
        }

        std::cout << t << " " << tag + 1 << std::endl;
    }

    return 0;
}

/*

素直にアリの動きをシミュレーションして求めた．
位置(position)，方向(direction)をアリに持たせているが，いちいち配列にせずとももう少しマシなデータ構造があるとおもう．

入力：
扱いやすいようにdirectionの'R'を1，'L'を-1とする．

シミュレーション：
アリごとにpositionの更新(directionを足してやればよい)をし，衝突検出を行う．

衝突検出のためにpointなる配列を用意する．すでに専有されたpositionにはそのアリの番号を登録できる(point[position[j]] = j)
こうすることで，もし別のアリの更新先の位置においてposition[更新先の位置]が0でなかったなら，
他のアリが既に登録されているので衝突ということになる．
衝突したさいには現在のアリとpositionに保存されているアリの2匹のdirectionを反転(-1倍)させればよい．
コレに関しては，別のデータ構造で位置・方向とアリの番号をまとめて登録してやって，衝突したら番号ごと交換するという風にすれば
もっと簡単に実装できそうだなという印象がある．

シミュレーション終了条件：
goalなるbool型配列をアリごとに用意してやり，defaultでfalse，抜けたらtrueにしてやって全員がtrueなら終了としている．

*/