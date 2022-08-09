#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int A, B, C, X, Y, ans = 0;
    cin >> A >> B >> C >> X >> Y;

    //組み替えるべきかどうか
    if (A + B > 2 * C)
    {
        //組み替えるべき
        ans += 2 * C * min(X, Y);
        //買い足すべきかどうか
        if (X > Y)
        {
            if (A > 2 * C)
            {
                ans += 2 * C * (X - Y);
            }
            else
            {
                ans += A * (X - Y);
            }
        }
        else if (X < Y)
        {
            if (B > 2 * C)
            {
                ans += 2 * C * (Y - X);
            }
            else
            {
                ans += B * (Y - X);
            }
        }
    }
    else
    {
        //組み替えるべきでない
        ans = A * X + B * Y;
    }

    cout << ans << endl;
}
