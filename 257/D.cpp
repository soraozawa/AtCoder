#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0;i<(n);i++)
using ll=long long;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<ll>> data(n);
    for(int i=0;i<n;i++){
        int x, y, p;
        cin >> x >> y >> p;
        data[i] = {x, y, p};
    }

    // 各辺のコストを求めておく
    vector<vector<ll>> dist(n, vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j] = (abs(data[i][0]-data[j][0]) + abs(data[i][1]-data[j][1]) + data[i][2] - 1) / data[i][2];
        }
    }

    // ワーシャルフロイド法
    for(int k=0;k<n;k++) for(int i=0;i<n;i++) for(int j=0;j<n;j++) dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));

    ll ans = 1e15;
    for(int i=0;i<n;i++){
        ll tans = 0;
        for(int j=0;j<n;j++)tans = max(tans, dist[i][j]);
        ans = min(ans, tans);
    }
    cout << ans << endl;
    return 0;
}