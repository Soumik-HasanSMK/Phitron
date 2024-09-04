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
        insert_tail(head,tail,val);
    }
    int ans=1;
    for(Node * i=head; i->next!=NULL; i=i->next)
    {
        for(Node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                ans=0;
                break;
            }
        }
    }
    if(ans==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}