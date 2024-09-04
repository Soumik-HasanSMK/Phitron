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
        return;
    }
    tail->next = newNode;
    tail=newNode;
}
int count_element(Node *head)
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
    Node *tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head,tail,val);
    }
    cout<<count_element(head);
    return 0;
}