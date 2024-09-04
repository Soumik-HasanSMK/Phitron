#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        { // command 0 hoile ekta string input nibo & queue te push kore dibo;
            string s;
            cin >> s;
            q.push(s);
        }
        else // command 1 hoile dekhbo queue empty kina;
        {    // empty na hoile queue theke front ta print kore pop kore dibo;
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else // queue empty hoile invalid;
                cout << "Invalid" << endl;
        }
    }
    return 0;
}