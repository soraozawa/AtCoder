#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int n;
    cin >> n;
    int proceed[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    rep(i, n)proceed[i]=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            proceed[i] += a[j];
        }
    }
    // rep(i, n)cout << proceed[i] << endl;
    int p = 0;
    for(int i=0;i<n;i++){
        if(proceed[i] >= 4)p++;
        else break;
    }
    cout << p << endl;
}