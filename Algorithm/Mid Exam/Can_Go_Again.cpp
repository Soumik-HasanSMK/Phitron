#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1005;
long long int dis[N];
class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> e_list;
    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        e_list.push_back(Edge(u, v, w));
    }
    for (ll i = 0; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    ll src;
    cin >> src;
    dis[src] = 0;
    ll t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            for (Edge ed : e_list)
            {
                ll u, v, w;
                u = ed.u;
                v = ed.v;
                w = ed.w;
                if (dis[u] < 1e18 && dis[u] + w < dis[v])
                    dis[v] = dis[u] + w;
            }
        }
        bool cycle = false;
        for (Edge ed : e_list)
        {
            ll u, v, w;
            u = ed.u;
            v = ed.v;
            w = ed.w;
            if (dis[u] < 1e18 && dis[u] + w < dis[v])
            {
                cycle = true;
                break;
            }
        }
        int dst;
        cin >> dst;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dis[dst] == 1e18)
            cout << "Not Possible" << endl;
        else if (dst == src)
            cout << 0 << endl;
        else
            cout << dis[dst] << endl;
    }
    return 0;
}