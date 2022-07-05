#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    int min_minutes=1000000000;
    for(int M=0;M<n;M++){
        int sum=0;
        int min_times=100000000;
        if(M <= x){
            for(int i=0;i<M;i++){
                sum += a[i];
                sum += b[i];
                min_times = min(min_times, b[i]);
            }
            sum += min_times * (x - M);
            min_minutes = min(min_minutes, sum);
            cout << min_times << endl;
        }
    }
    cout << min_minutes << endl;
    return 0;
}