#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;
        int mx = 0;
        string str;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                str = word;
            }
        }
        cout << str << " " << mx << endl;
    }
    return 0;
}