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
/*int dupliucate(Node *head)
{
    Node *temp=head;
    
}*/
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
    //int ans=dupliucate(head);
    int freq[100]={0};
    for(Node *i= head;i!=NULL;i=i->next)
    {
        freq[i->val]++;
    }
    int ans=0;
    for(int i=0;i<100;i++)
    {
        if(freq[i]>1)
            ans=1;
    }
    if(ans==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}