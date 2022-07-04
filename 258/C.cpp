#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int t, x;
    int p = 0;
    for(int i=0;i<q;i++){
        cin >> t >> x;
        if(t == 1)p = (p-x)%n;
        else if(t == 2)cout << s[(x-1+p)%n] << endl;
    }
    return 0;
}