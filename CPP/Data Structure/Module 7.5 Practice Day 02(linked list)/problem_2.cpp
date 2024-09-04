#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void recursion_reverse(Node *head)
{
    if(head==NULL)
        return;
    recursion_reverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head, tail, val);
    }
    recursion_reverse(head);
    return 0;
}