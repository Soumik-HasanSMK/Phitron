#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> mylist;
    string val;
    // take input,,end na paowa porjonto;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        mylist.push_back(val);
    }
    int t;
    cin >> t;
    auto curr = mylist.begin(); // shurute current position homepage e;
    while (t--)
    {
        string cmd;
        cin >> cmd;
        // command jodi "visit" pai,
        // user er theke website nibo, then website ti jodi mylist er e thake,
        // tahole oita print korre dibo;
        // na paile not available;
        // sei sathe current position tao update korbo;
        if (cmd == "visit")
        {
            string address;
            cin >> address;                                        // take website;
            auto it = find(mylist.begin(), mylist.end(), address); // finding the website in mylist;
            if (it != mylist.end())
            {
                curr = it; // upadate current position;
                cout << *curr << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        // command jodi "next" hoy, check korbo eta avialable kina;
        // so, iterator kore next e chole jabo, jodi end e chole na jai tahole,tahole available;
        // then eita hoye jabe current page, then print; && update position;
        else if (cmd == "next" && next(curr) != mylist.end()) // iterator kore samne agalam, jodi end e chole na jai, tahole available;
        {
            curr++; // position update;
            cout << *curr << endl;
        }
        // command jodi "prev" hoy, check korbo eta avialable kina;
        // so, iterator kore pichone back e chole jabo, jodi begin e chole na jai tahole,tahole available;
        else if (cmd == "prev" && curr != mylist.begin())
        {
            curr--; // position update;
            cout << *curr << endl;
        }
        else
            cout << "Not Available" << endl;
    }
    return 0;
}