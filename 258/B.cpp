#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    vector<int> p = {0, 1, 1, 1, 0, -1, -1, -1};
    vector<int> q = {1, 1, 0, -1, -1, -1, 0, 1};

    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<8;k++){
                ll now = 0; 
                ll x = i, y = j;
                for(int l=0;l<n;l++){
                    now *= 10;
                    now += a[x][y];
                    x += p[k];
                    y += q[k];
                    x %= n;
                    y %= n;
                    x += n;
                    y += n;
                    x %= n;
                    y %= n;
                }
                ans = max(ans, now);
            }
        }
    }
    cout << ans << endl;
    return 0;
}