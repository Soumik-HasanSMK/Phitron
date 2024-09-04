#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    priority_queue<int, vector<int>, greater<int>> q;
    while (t--)
    {
        int n;
        cin >> n;
        q.push(n);
    }
    int x;
    cin >> x;
    while (x--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int m;
            cin >> m;
            q.push(m);
            cout << q.top() << endl;
        }
        else if (cmd == 1)
        {
            if (!q.empty())
                cout << q.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 2)
        {
            if (!q.empty())
                q.pop();
            if (!q.empty())
                cout << q.top() << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}