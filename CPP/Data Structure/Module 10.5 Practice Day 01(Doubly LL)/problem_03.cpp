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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int smk = 1;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            smk = 0;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
        smk = 0;
    return smk;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int smk = palindrome(head, tail);
    if (smk == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}