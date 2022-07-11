#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    int h, w;
    cin >> h >> w;
    vector<int> x, y;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char s;
            cin >> s;
            if(s == 'o'){
                y.push_back(i);
                x.push_back(j);
            }
        }
    }
    cout << abs(x[1] - x[0]) + abs(y[1] - y[0]) << endl;
    return 0;
}