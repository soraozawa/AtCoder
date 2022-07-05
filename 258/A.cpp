#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int k;
    cin >> k;
    int hour, minute;
    hour = 21 + k / 60;
    minute = k % 60;
    if(minute / 10 == 0){
        cout << hour << ":" << 0 << minute << endl;
    }else{
        cout << hour << ":" << minute << endl;
    }
    
}