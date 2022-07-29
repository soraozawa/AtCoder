#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0;i<(n);i++)

int main(void)
{
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(count(s.cbegin(), s.cend(), s[i]) == 1){
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}