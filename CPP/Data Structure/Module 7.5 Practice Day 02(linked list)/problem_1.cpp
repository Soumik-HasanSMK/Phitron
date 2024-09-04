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
    Node *newNode= new Node(val);
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
    Node * head=NULL;
    Node * tail=NULL;
    Node * head1=NULL;
    Node * tail1=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }    
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }    
    int sz1=size(head);
    int sz2=size(head1);
    if(sz1==sz2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}