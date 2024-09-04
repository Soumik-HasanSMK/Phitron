#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        while (!st.empty()) // prottek string er jonno stack ti empty kore nibo.
            st.pop();       // noyto obosistho char stack e thekei jabe.
        for (char c : s)
        { // 1st char push korbo;
            // stack empty na hole & char jodi top er same hoy tobe seta stack e push korbo;
            // else stack empty na hole pop kore dibo;
            if (st.empty() || c == st.top())
                st.push(c);
            else
            {
                if (!st.empty())
                    st.pop();
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}