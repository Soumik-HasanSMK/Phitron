#include <bits/stdc++.h>
using namespace std;
int n, m;
const int d = 1001;
char mat[d][d];
int vis[d][d];
vector<pair<int, int>> moving = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != '-' && x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int x, int y)
{
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int new_x = x + moving[i].first;
        int new_y = y + moving[i].second;
        if (valid(new_x, new_y))
        {
            dfs(new_x, new_y);
        }
    }
}
int main()
{
    // pair<int, int> src;
    pair<int, int> dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    }
    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    // src = {a, b};
    dst = {x, y};
    dfs(a, b);
    if (vis[dst.first][dst.second] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}