#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int t, x;
    for(int i=0;i<q;i++){
        cin >> t >> x;
        if(t == 1){
            for(int j=0;j<x;j++){
                int length = s.size();
                s = s[length - 1] + s;
                s.pop_back();
            }
        }else if(t == 2){
            // cout << s << endl;
            cout << s[x-1] << endl;
        }
    }
    return 0;
}