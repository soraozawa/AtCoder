#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ll k = i;
        for(ll d=2;d*d<=k;d++){
            while(k%(d*d)==0)k /= d*d;
        }
        for(ll d=1;k*d*d<=n;d++)ans++;
    }
    cout << ans << endl;
    return 0;
}