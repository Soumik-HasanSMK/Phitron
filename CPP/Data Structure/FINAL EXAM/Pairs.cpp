#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
    if (p1.first == p2.first)
    {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}
int main()
{
    int t;
    cin >> t;
    getchar();
    vector<pair<string, int>> v;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        v.push_back({s, n});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}