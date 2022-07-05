#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(void)
{
    int n, x;
    cin >> n >> x;
    // int a[n], b[n];
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;++i){
        cin >> a[i] >> b[i];
    }
    ll ans = numeric_limits<ll>:: max(), sum = 0;
    for(int i=0;i<n;++i){
        if(i+1 > x){
            break;
        }
        sum += a[i] + b[i];
        ans = min(ans, sum + (ll)b[i] * (x - i - 1));
    }
    // int min_minutes=1000000000;
    // for(int M=0;M<n;M++){
    //     int sum=0;
    //     int min_times=100000000;
    //     if(M <= x){
    //         for(int i=0;i<M;i++){
    //             sum += a[i];
    //             sum += b[i];
    //             min_times = min(min_times, b[i]);
    //         }
    //         sum += min_times * (x - M);
    //         min_minutes = min(min_minutes, sum);
    //         cout << min_times << endl;
    //     }
    // }
    cout << ans << endl;
    return 0;
}