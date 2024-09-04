#include <bits/stdc++.h>
using namespace std;
int n, m;
const int d = 1001;
int mat[d][d];
bool vis[d][d];
vector<pair<int, int>> loc = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + loc[i].first;
            int new_y = y + loc[i].second;
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
            }
        }
    }
}
int main()
{
    pair<int, int> src;
    pair<int, int> dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
            if (s[j] == 'A')
                src = {i, j};
            if (s[j] == 'B')
                dst = {i, j};
        }
    }
    bfs(src);
    if (vis[dst.first][dst.second] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}