#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i, n)a[i] = vector<int>(i+1);

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            int ret;
            if(j==0 || i==j) ret = 1;
            else ret = a[i-1][j-1] + a[i-1][j];
            cout << ret << ' ';
            a[i][j] = ret;
        }
        cout << endl;
    }
    return 0;
}