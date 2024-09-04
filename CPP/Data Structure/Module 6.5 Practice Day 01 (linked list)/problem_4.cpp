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
    tail->next = newNode;
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
void  insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp=head;
    newNode->next=temp;
    head=newNode;
}
void insert_any_position(Node *head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail= NULL;
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
    int sz=size(head);
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>sz)
        {
            cout<<"Invalid"<<endl;
        }
        else if(pos==0)
        {
            insert_head(head,val);
            print_linked_list(head);
        }
        else if(pos==sz)
        {
            insert_tail(head,tail,val);
            print_linked_list(head);
        }
        
        else
        {
            insert_any_position(head, val,pos);
            print_linked_list(head);
        }
    }
    return 0;
}