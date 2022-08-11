#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int N;
    ll ans = 0;
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    for (int i = 0; i < N; i++)
    {
        ll a = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        ll c = C.end() - upper_bound(C.begin(), C.end(), B[i]);
        ans += a * c;
    }
    cout << ans << endl;
}
