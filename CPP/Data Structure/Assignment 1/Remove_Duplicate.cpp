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
void duplicate(Node *head)
{
    for(Node *i=head;i!=NULL;i=i->next) 
    {   //1st loop e head theke null porjonto son gula node nilam access korar jonno;
        //then r ekta loop chalabo 1st loop er node gulake check korar jonno;
        //2nd loop start korbo 1st loop er start thekei;
        //check korbo 2nd loop er next node(N2) er value jodi 1st loop er node valu(N1) er soman hoy
        //tahole N2->next k delelte kore dibo;
        for(Node *j=i;j->next!=NULL;) 
        {//ekhane 2nd loop er increment korbona;
        //karon j diye amra 1st er node check korbo; jodi same pai tobe to delete korbo, na paile j increment kore dibo;
        //so else er majhe j taake increment korbo;
            if(j->next->val==i->val)
            {
                Node *temp=j->next;
                j->next=j->next->next;
                delete temp;
            }       //amra jodi duplicate value nna pai, tahole j take increment korbo;
            else    //and traversal continue korbo;
                j=j->next;
        }
    }
}
void print_lined_list(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
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
    duplicate(head);
    print_lined_list(head);
    return 0;
}