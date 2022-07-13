#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    int upper = 2*pow(10, 5);

    // Ai<Aj<Akを満たす(i,j,k)の組の個数を求めよと読み替える

    // 予めi未満の数がいくつあるか計算しておく
    int cnt[upper+1] = {0};
    rep(i, n)cnt[a[i]] += 1;
    
    for(int i=0;i<2*pow(10, 5);i++){
        cnt[i+1] += cnt[i];
    }
    
    //　jを全探索する
    int ans = 0; 
    for(int j=0;j<n;j++){
        ans += cnt[a[j]-1] * (n - cnt[a[j]]);
    }
    cout << ans << endl;
    return 0;
}