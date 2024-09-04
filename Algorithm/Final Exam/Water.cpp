#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int>> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            q.push({a[i], i});
        }
        int f1 = q.top().second;
        q.pop();
        int f2 = q.top().second;
        q.pop();
        if (f1 < f2)
            cout << f1 << " " << f2 << endl;
        else
            cout << f2 << " " << f1 << endl;
    }
    return 0;
}