#include <bits/stdc++.h>
using namespace std;
int n, m;
const int d = 1001;
char mat[d][d];
bool vis[d][d];
vector<pair<int, int>> loc = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] == '.' && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] == true;
    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = a + loc[i].first;
            int new_y = b + loc[i].second;
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && vis[i][j] == false)
            {
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}