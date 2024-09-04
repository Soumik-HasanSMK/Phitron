#include <bits/stdc++.h>
using namespace std;
int n, m;
bool vis[105][105];
int dis[105][105];
vector<pair<int, int>> mov = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
int bfs(int a, int b, int x, int y)
{
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(vis));
    queue<pair<int, int>> q;
    q.push({a, b});
    vis[a][b] = true;
    dis[a][b] = 0;
    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int present_x = par.first;
        int present_y = par.second;
        if (present_x == x && present_y == y)
            return dis[present_x][present_y];
        for (int i = 0; i < 8; i++)
        {
            int new_x = present_x + mov[i].first;
            int new_y = present_y + mov[i].second;
            if (valid(new_x, new_y) && vis[new_x][new_y] == false)
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
                dis[new_x][new_y] = dis[present_x][present_y] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int result = bfs(a, b, x, y);
        cout << result << endl;
    }
    return 0;
}