#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

ll sum(ll n){
    return n*(n+1)/2;
}

int main(void)
{
    ll n, a, b;
    cin >> n >> a >> b;
    // Aの倍数でも B の倍数でもないもの = 全て - Aの倍数 - Bの倍数 + A*Bの倍数
    // 1~nまでの総和：f(n):=1+2+…+n=n(n+1)/2
    ll ret;
    ret = sum(n) - a*sum(n/a) - b*sum(n/b) + lcm(a, b)*sum(n/lcm(a, b));
    cout << ret;
    return 0;
}