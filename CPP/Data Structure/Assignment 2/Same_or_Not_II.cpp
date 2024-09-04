#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myS
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push_st(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myQ
{
public:
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int sz1 = 0;
    void push_q(int val)
    {
        Node *newNode = new Node(val);
        if (head1 == NULL)
        {
            head1 = newNode;
            tail1 = newNode;
            return;
        }
        tail1->next = newNode;
        newNode->prev = tail1;
        tail1 = newNode;
    }
    void pop()
    {
        sz1--;
        Node *deleteNode = head1;
        if (head1 == NULL)
        {
            tail1 = NULL;
            return;
        }
        head1 = head1->next;
        delete deleteNode;
    }
    int front()
    {
        return head1->val;
    }
    int size()
    {
        return sz1;
    }
    bool empty()
    {
        if (sz1 == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    if (n != m)
        ans = 0;
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
                ans = 0;
            st.pop();
            q.pop();
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}