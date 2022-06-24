#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>>query;
    for (int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        query.push_back({l, 0});
        query.push_back({r, 1});
    }
    sort(query.begin(), query.end());

    int cnt=0;
    for(auto[t, f]:query){
        if(f==0){
            if(cnt==0)cout << t << " ";
            cnt++;
        }else{
            cnt--;
            if(cnt==0)cout << t << endl;
        }
    }
}