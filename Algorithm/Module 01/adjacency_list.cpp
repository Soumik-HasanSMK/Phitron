#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    cout << "Enter node to see connection : ";
    int node;
    cin >> node;
    for (int i = 0; i < arr[node].size(); i++)
    {
        cout << arr[node][i] << endl;
    }
    return 0;
}