#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x, ans;
    cin >> n;

    string s;
    cin >> s;

    vector<pair<int, char>> p;
    for (int i=0;i<n;i++){
        cin >> x;
        p.push_back({x, s[i]});
        if(s[i] == '1')ans++; 
    }
    sort(p.begin(), p.end());
    x = ans;
    for (int i=0;i<n;i++){
        if (p[i].second == '1')x--;
        else x++;
        if (i < (n-1)){
            if (p[i].first != p[i+1].first)ans = max(ans, x);
        }
        else ans=max(ans, x);
    }
    cout << ans << endl;
    return 0;
}