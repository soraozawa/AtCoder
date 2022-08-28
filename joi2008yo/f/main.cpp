#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int judge(int fare, int a, int b)
{
    int ret = 0;
    return ret;
}

int main()
{
    int n, k, ans = 0;
    int a, b, c, d, e;
    cin >> n;
    int fare[n][n];
    rep(i, n) rep(j, n) fare[i][j] = -1;
    int first;
    for (int i = 0; i < k + 1; i++)
    {
        cout << "1" << endl;
        if (first == 0)
        {
            cin >> a >> b;
            cout << judge(fare, a, b);
        }
        else if (first == 1)
        {
            cin >> c >> d >> e;
            // fareを更新
        }
    }

    cout << ans << endl;
}
