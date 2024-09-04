#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int knapsack(int n, int w, int wt[], int vl[])
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (wt[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, w - wt[n - 1], wt, vl) + vl[n - 1];
        int op2 = knapsack(n - 1, w, wt, vl);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, w, wt, vl);
        return dp[n][w] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int wt[n], vl[n];
        for (int i = 0; i < n; i++)
            cin >> wt[i];
        for (int i = 0; i < n; i++)
            cin >> vl[i];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
                dp[i][j] = -1;
        }
        cout << knapsack(n, w, wt, vl) << endl;
    }
    return 0;
}