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
    tail = tail->next;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int compare(Node *head, Node *head1)
{
    Node *tmp = head;
    Node *tmp1 = head1;
    int smk = 1;
    while (tmp != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            smk = 0;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    return smk;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }
    if (size(head) != size(head1))
        cout << "NO" << endl;
    else
    {
        int cmp = compare(head, head1);
        if (cmp == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}