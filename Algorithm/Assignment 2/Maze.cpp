#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
char a[N][N];
bool vis[N][N];
pair<int, int> par[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#' && !vis[i][j]);
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    bool flag = false;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto val : d)
        {
            int new_x = x + val.first;
            int new_y = y + val.second;
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
                par[new_x][new_y] = {x, y};
            }
        }
    }
}
void short_path(int si, int sj, int di, int dj)
{
    while (di != si || dj != sj)
    {
        if (a[di][dj] != 'D')
            a[di][dj] = 'X';
        pair<int, int> p = par[di][dj];
        di = p.first;
        dj = p.second;
    }
}
int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (a[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    if (vis[di][dj])
        short_path(si, sj, di, dj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << endl;
    }
    return 0;
}