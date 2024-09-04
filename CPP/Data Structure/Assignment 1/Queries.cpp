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
void insert_at_tail(Node *&head, int val)
{
    Node *new_node= new Node(val);  //value taake ekta new node e rakha holo;
    if(head == NULL)    //jodi head null hoi, tahole new node k head banabo;
    {
        head = new_node;
        return;
    }
    //jodi head null na hoi, tahole temp er maddhome next next kore last node porjonto pousabo;
    //then last node er next er sathe new node connect kore dite hobe;
    Node *temp=head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }   //temp ekhon last node e.
    //ekhon temp er next k new node diye dibo;
    temp->next=new_node;
}
void insert_at_head(Node *&head, int val)   //head jehetu update korte hobe, ei jonno reference nite hobe;
{
    Node *new_node = new Node(val);
    Node *temp = head;     //head k temp er majhe rekhe dila.; noito head haray jaabe;
    new_node->next = temp;  //new node er next k temp er diye dilam;
    head = new_node;    //ekhon head update korlam..i.e new node k head banailam;
}
void print_linked_list(Node *head)  //print korar jonno shudhu head pathaite hoy;
{
    Node *temp = head;
    while(temp!=NULL)   //loop cholbe jotokkhon na temp null hocche;
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void delete_head(Node *&head)
{
    if(head==NULL)  //head null hoile return kore dibo;
        return;
    Node *delete_head = head;
    head = head->next;
    delete delete_head;
}
int size(Node *head)
{
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void delete_any_position(Node *head, int pos)
{
    Node *delete_node=new Node(pos);
    Node *temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)  //temp jodi Null hoy, tahole seta ivalid; tai print function call korlam;
            print_linked_list(head);
    }
    if(temp->next==NULL)    //temp er next Null hoileo same.
        print_linked_list(head);
    delete_node=temp->next;
    temp->next=temp->next->next;
    delete delete_node;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)   //x=0 hoile head a insert kobe
        {
            insert_at_head(head,v); //insert_haed call kore print korlam;
            print_linked_list(head);
        }
        if(x==1)    //jodi x=1 hoy, tahole tail e insert korbe;
        {
            insert_at_tail(head,v); //insert_at_tail call kore print korlam;
            print_linked_list(head);
        }
        if(x==2)    //x=2 hoile v er position er upor nirvor korbe;
        {
            int sz=size(head);
            if(v==0)    //v=0 hoile head delete korbe;
            {
                delete_head(head);  //delete_head call kore print kore dilam;
                print_linked_list(head);
            }
            else if(v>=sz)  //v size er soman ba boro hoile ivalid;
            {               //so ekhane kono kaj na kore shudhu linked list print korlei hobe;
                print_linked_list(head);
            }
            else    //else any position a delete korbe;
            {
                delete_any_position(head,v);    //delete_any_position call kore print korlam;
                print_linked_list(head);
            }
        }
    }
    return 0;
}