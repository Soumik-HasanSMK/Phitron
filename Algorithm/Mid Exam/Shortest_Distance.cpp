#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll mat[n + 1][n + 1];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            mat[i][j] = 1e18;
            if (i == j)
                mat[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        if (w < mat[a][b])
            mat[a][b] = w;
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll src, dst;
        cin >> src >> dst;
        if (mat[src][dst] == 1e18)
            cout << -1 << endl;
        else
            cout << mat[src][dst] << endl;
    }
    return 0;
}