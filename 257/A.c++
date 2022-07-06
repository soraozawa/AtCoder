#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x;
    cin >> n >> x;
    int ans_int;
    ans_int = x / n;
    char ans = 'A' + ans_int;
    cout << ans << endl;
}