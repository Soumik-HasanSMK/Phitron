#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
priority_queue<int> pq;
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        for (int i = 0; i < v[x].size(); i++)
        {
            pq.push(v[x][i]);
        }
        if (v[x].empty())
            cout << -1;
        else
        {
            while (!pq.empty())
            {
                cout << pq.top() << " ";
                pq.pop();
            }
        }
        cout << endl;
    }
    return 0;
}