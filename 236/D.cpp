#include <bits/stdc++.h>
using namespace std;


int a[20][20];
int n;

bool used[20];
vector<pair<int, int>> vec;

int calc(){
    if(vec.size() == n){
        int ret = 0;
        for(auto p : vec)ret ^= (a[p.first][p.second]);
        return ret;
    }

    // 1人目（最も番号の小さい人を選ぶ）
    int l;
    for(int i=1;i<=2*n;i++){
        if(!used[i]){
            l = i;
            break;
        }
    }
    used[l] = true;

    // 2人目（楽しさの最大値を計算する）
    int ret = 0;
    for(int i=1;i<=2*n;i++){
        if(!used[i]){
            vec.push_back({l,i});
            used[i] = true;
            ret = max(ret, calc());
            vec.pop_back();
            used[i] = false;
        }
    }
    used[l] = false;
    return ret;
}

int main(void)
{
    cin >> n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=i+1;j<2*n;j++){
            cin >> a[i][j];
        }
    }
    cout << calc() << endl;
    return 0;
}