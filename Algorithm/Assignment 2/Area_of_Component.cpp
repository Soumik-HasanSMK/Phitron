#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && a[i][j] == '.');
}
int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int area = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            area += dfs(ci, cj);
        }
    }
    return area;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int min_area = INT_MAX;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int cnt = dfs(i, j);
                min_area = min(min_area, cnt);
            }
        }
    }
    if (min_area == INT_MAX)
        cout << -1 << endl;
    else
        cout << min_area << endl;
    return 0;
}