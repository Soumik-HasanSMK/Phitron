#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        bool ans = false;
        if (m == 1000)
            ans = true;
        else
        {
            int d = 1000 - m;
            bool dp[n + 1][d + 1];
            dp[0][0] = true;
            for (int i = 1; i <= d; i++)
                dp[0][i] = false;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= d; j++)
                {
                    if (a[i - 1] <= j)
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
            vector<int> v;
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= d; j++)
                {
                    if (dp[i][j] == 1)
                        v.push_back(j);
                }
            }
            for (int x : v)
            {
                if (x == d)
                {
                    ans = true;
                    break;
                }
                else
                    ans = false;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}