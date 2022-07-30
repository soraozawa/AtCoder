#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> passed(n);

    vector<int> a(n), b(n);
    rep(i, n)cin >> a[i];
    rep(i, n)cin >> b[i];
    int flag[n];
    rep(i, n)flag[i] = 0;

    // 数学の順位
    for(int i=0;i<x;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[j]!=1){
                if(pos == -1 || a[j] > a[pos])pos = j;
            }
        }
        flag[pos] = 1;
    }
    // 英語の順位
    for(int i=0;i<y;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[j]!=1){
                if(pos == -1 || b[j] > b[pos])pos = j;
            }
        }
        flag[pos] = 1;
    }

    // 数学と英語の和の順位
    for(int i=0;i<z;i++){
        int pos = -1;
        for(int j=0;j<n;j++){
            if(flag[j]!=1){
                if(pos == -1 || a[j]+b[j] > a[pos]+b[pos])pos = j;
            }
        }
        flag[pos] = 1;
    }

    rep(i, n)if(flag[i] == 1)cout << i+1 << endl;
    return 0;
} 
