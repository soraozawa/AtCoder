#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i, k)cin >> a[i], a[i]--;
    vector<int> x(n), y(n);
    rep(i, n)cin >> x[i] >> y[i];

    //全探索
    ll max_dist = 0;
    for(int i=0;i<n;i++){
        ll min_dist = 2e64;
        for(auto illuminated_idx : a){
            ll dist;
            dist = pow((x[i] - x[illuminated_idx]), 2) + pow((y[i] - y[illuminated_idx]), 2);
            min_dist = min(min_dist, dist);
        }
        max_dist = max(max_dist, min_dist);
    }
    cout << fixed << setprecision(12) << sqrt((ll)max_dist) << endl;
    return 0;
}