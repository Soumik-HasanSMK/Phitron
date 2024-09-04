#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    if (n != m)
        ans = 0;
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
                ans = 0;
            st.pop();
            q.pop();
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}