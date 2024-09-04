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
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int max_value(Node *head)
{
    Node *temp=head;
    int mx=INT_MIN;
    while(temp!=NULL)
    {
        if(temp->val>mx)
            mx=temp->val;
        temp=temp->next;
    }
    return mx;
}
int min_value(Node *head)
{
    Node *temp=head;
    int mn=INT_MAX;
    while(temp!=NULL)
    {
        if(temp->val<mn)
            mn=temp->val;
        temp=temp->next;
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head,tail,val);
    }
        int mx=max_value(head);
        int mn=min_value(head);
        int ans=abs(mx-mn);
        cout<<ans<<endl;
    return 0;
}