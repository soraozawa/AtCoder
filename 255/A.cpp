#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int r, c;
    cin >> r >> c;
    for(int i=1;i<=2;i++){
        int a[3];
        cin >> a[1] >> a[2];
        // cout << a[1] << a[2] << endl;
        if(i == r){
            cout << a[c] << endl;
            break;
        }
    }
    return 0;
}