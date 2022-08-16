#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int R, C, sx, sy, gx, gy, ans = 0;
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--, sx--, gx--, gy--;
    vector<vector<int>> dist(R, vector<int>(C, -1));
    vector<string> c(R);
    rep(i, R) cin >> c[i];

    const int dx[4] = {-1, 0, 1, 0};
    const int dy[4] = {0, -1, 0, 1};

    queue<pair<int, int>> q;

    q.push(make_pair(sy, sx));
    dist[sy][sx] = 0;
    // 幅優先探索
    // キュー
    while (!q.empty())
    {
        pair<int, int> coordinate = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int y = coordinate.first + dy[i];
            int x = coordinate.second + dx[i];

            if (c[y][x] == '#')
                continue;
            if (dist[y][x] != -1)
                continue;
            dist[y][x] = dist[coordinate.first][coordinate.second] + 1;
            q.push(make_pair(y, x));
        }
    }
    cout << dist[gy][gx] << endl;
}
