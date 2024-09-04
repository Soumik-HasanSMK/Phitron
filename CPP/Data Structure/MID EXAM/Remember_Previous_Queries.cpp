#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> doubly_l_l;
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0) // position 0 hoile front e insert bkorbe;
            doubly_l_l.push_front(val);
        // pos 1 hpole tail e insert korbe;
        else if (pos == 1)
            doubly_l_l.push_back(val);
        // pos 2 hoile val er man position hisebe kaj korbe,
        else if (pos == 2)
        {
            int sz = doubly_l_l.size();
            // val 0 hoile head delete;
            if (val == 0 && sz != 0)
                doubly_l_l.pop_front();
            // val 1 er boro && size er choto hoile position porjonto jabo,
            // then oi position er value delete kore dibo;
            else if (val < sz)
            { // iterator kore oi position porjonto gelam;
                auto it = next(doubly_l_l.begin(), val);
                doubly_l_l.erase(it); // then erase korlam;
            }
        }
        cout << "L -> ";
        for (int v : doubly_l_l)
            cout << v << " "; // L to R print;
        cout << endl;
        cout << "R -> ";
        // R to L korar jonno reverse korlam;
        doubly_l_l.reverse();
        for (int v : doubly_l_l)
            cout << v << " "; // R to L print;
        cout << endl;
        // ekhon linked list reverse obostay ache,
        // so abaro reverse kore norma e jaite hobe;
        doubly_l_l.reverse();
    }
    return 0;
}