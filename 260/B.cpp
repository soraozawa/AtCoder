#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> passed(n);

    vector<int> a(n), b(n);
    rep(i, n)cin >> a[i];
    rep(i, n)cin >> b[i];
    int flag[n];

    // 数学の順位
    for(int i=0;i<x;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[i]!=1){
                if(pos == -1 || a[i] > a[pos])pos = i;
            }
        }
        flag[i] = pos;
    }
    // 英語の順位
    for(int i=0;i<x;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[i]!=1){
                if(pos == -1 || b[i] > b[pos])pos = i;
            }
        }
        flag[i] = pos;
    }

    // 数学と英語の和の順位
    for(int i=0;i<x;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[j]!=1){
                if(pos == -1 || a[j]+b[i] > a[pos]+b[pos])pos = i;
            }
        }
        flag[i] = pos;
    }

    // 出力
    rep(i, n)if(flag[i] == 1){cout << i << endl;}
    return 0;
}
// TODO: jをiにする