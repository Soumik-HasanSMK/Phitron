#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1001;
vector<pair<ll, ll>> v[N];
long long dis[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> par = pq.top();
        pq.pop();
        ll node = par.first;
        ll cost = par.second;
        for (pair<ll, ll> p : v[node])
        {
            ll c_node = p.first;
            ll c_cost = p.second;
            if (cost + c_cost < dis[c_node])
            {
                dis[c_node] = cost + c_cost;
                pq.push({c_node, dis[c_node]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 10e18;
    }
    ll src;
    cin >> src;
    dijkstra(src);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (dis[x] <= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}