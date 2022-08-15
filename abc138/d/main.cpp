#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int mx = 200000;
vector<vector<int>> G(mx, vector<int>());
vector<int> ans(mx);

// DFS(深さ優先探索)
void dfs(int i, int p = -1)
{
    for (auto v : G[i])
    {
        if (v == p)
            continue;
        ans[v] += ans[i];
        dfs(v, i);
    }
    return;
}
int main()
{
    int N, Q;
    cin >> N >> Q;

    for (int i = 1; i <= N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= Q; i++)
    {
        int p, x;
        cin >> p >> x;
        ans[p] += x;
    }
    dfs(0);
    for (int i = 1; i <= N; i++)
    {
        cout << ans[i];
        if (i != N)
        {
            cout << " ";
        }
    }
    cout << endl;
}
