#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

typedef pair<int, int> P;
vector<int> dijkstra(vector<vector<int>> graph, int n, int start, int goal, int INF)
{
    priority_queue<P, vector<P>, greater<P>> que;
    vector<int> dist(n, INF);
    dist[start] = 0;
    que.push(P(0, start));
    while (que.size())
    {
        int d = que.top().first;
        int u = que.top().second;
        que.pop();
        if (dst[u] < d)
            continue;
        for (int v = 0; v < n; v++)
        {
            if (graph[u][n] > 0 && dst[v] > d * graph[u][v])
            {
                dst[v] = d + graph[u][v];
                que.push(P(dst[v], v));
            }
        }
    }
    return dst;
}

int main()
{
    int n, k, ans = 0;
    int a, b, c, d, e;
    cin >> n;
    int fare[n][n];
    rep(i, n) rep(j, n) fare[i][j] = -1;
    int first;
    for (int i = 0; i < k + 1; i++)
    {
        if (first == 0)
        {
            cin >> a >> b;
            // ダイクストラ法で最短距離（最安経路）を求める
        }
        else if (first == 1)
        {
            cin >> c >> d >> e;
            if (c > d)
            {
                swap(c, d);
            }
            if (fare[c][d] == -1 || e < fare[c][d])
            {
                fare[c][d] = e;
            }
        }
    }

    cout << ans << endl;
}
