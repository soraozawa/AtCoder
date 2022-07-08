#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0;i<(n);i++)
using ll=long long;
int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(auto &nx : a)cin >> nx;
    sort(a.begin(), a.end());

    // 累積和を事前計算
    vector<ll> rw(n+1, 0);
    for(ll i=0;i<n;i++)rw[i+1] = rw[i] + a[i];

    for(ll i=0;i<q;i++){
        ll x;
        cin >> x;
        int st = 0, fi = n-1;
        // 二分探索
        while(st <= fi){
            int te = (st + fi) / 2;
            if(a[te] < x) st = te + 1;
            else fi = te - 1;
        }
        ll res;
        res = x * st;
        res -= rw[fi+1];
        res += (rw[n] - rw[st]);
        res -= x * (n - st);
        cout << res << endl;
    }
    return 0;
}