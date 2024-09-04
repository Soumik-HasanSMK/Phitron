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
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
int size(Node *head)
{
    int cnt=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main()
{
    Node *head=NULL;
    Node *tail= nullptr;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head, tail, val);
    }
    int sz=size(head);
    if(sz%2==1)
    {
        Node *temp=head;
        for(int i=1;i<=sz/2;i++)
        {
            temp=temp->next;
        }
        cout<<temp->val<<endl;
    }
    else
    {
        Node *temp=head;
        for(int i=1;i<sz/2;i++)
        {
            temp=temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    return 0;
}