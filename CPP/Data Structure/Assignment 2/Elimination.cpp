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
        {
            if (c == '0') // char 0 hoilei push kore dibo;
                st.push(c);
            else
            {                                       // char 1 hoile dekhbo stack empty kina && stack er top value 0 kina;
                if (!st.empty() && st.top() == '0') // emn hoile pop kore dibo;
                    st.pop();
                else
                    st.push(c); // else 1 tao push kore dibo.
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}