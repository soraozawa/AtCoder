#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            int ret;
            if(j==0 || i==j) ret = 1, cout << 1;
            else ret = a[i-1][j-1] + a[i-1][j];
            cout << ret << ' ';
            cout << 1;
            a[i][j] = ret;
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}