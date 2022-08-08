#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int N, ans = 0;
    cin >> N;
    int num_divisor[N + 1];
    for (int i = 1; i <= N; i++)
        num_divisor[i] = 0;
    // 約数を全探索、全列挙する
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    num_divisor[i] += 1;
                }
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (num_divisor[i] == 8)
        {
            ans += 1;
        }
    }
    cout << ans << endl;
}
