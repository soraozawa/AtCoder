#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    string s[n];
    rep(i, n) cin >> s[i];
    int cnt[10][10] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            cnt[s[i][j]-'0'][j]++;
       }
    }
    
    int ans = 1000;
    for(int i=0;i<10;i++){
        int mx = 0;
        for(int j=0;j<10;j++){
            mx = max(mx, 10*(cnt[i][j] - 1) + j);
        }
        ans = min(ans, mx);
    }
    cout << ans << endl;
    return 0;
    
}