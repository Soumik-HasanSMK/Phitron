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
    }
    tail->next = newNode;
    tail = newNode;
}
int max_value(Node *head)
{
    int mx=INT_MIN;
    while(head->next!=NULL)
    {
        if(head->val>mx)
            mx=head->val;
        head=head->next;
    }
    return mx;
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
    
    cout<<max_value(head)<<endl;
    return 0;
}