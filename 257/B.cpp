#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, q, x;
    cin >> n >> k >> q;
    int a[n];
    for(int i=1;i<=k;i++){
        cin >> a[i];
    }
    for(int i=0;i<q;i++){
        cin >> x;
        x --;
        if(a[x] == n)continue;
        else if(x == k)a[x]++;
        else if(a[x]+1 < a[x+1])a[x]++;
    }
    for(int i=0;i<k;i++){
        cout << a[i];
        if(i < k) cout << " ";
        else cout << endl;
    }
    return 0;
}