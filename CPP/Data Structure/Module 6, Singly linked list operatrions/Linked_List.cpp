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
void print_linked_list(Node *head)  //print korar jonno shudhu head pathaite hoy;
{
    cout<<"Linkd list is : ";
    Node *temp = head;
    while(temp!=NULL)   //loop cholbe jotokkhon na temp null hocche;
    {
        cout<<temp->val<<"  ";
        temp = temp->next;
    }
    cout<<endl<<endl;;
}
void insert_any_position(Node *head, int val, int pos)  //any position er jonno head,value & position lage;
{
    Node *new_node= new Node(val);  //value taake new node kore dilam;
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)   //j position e insert korbo, tar ager position porjonto loop chaliye asbo;
    {
        temp=temp->next;    //temp ekhon insert position er ager position e;
    }   //sorbo prothom kaj hopcche new node er next er sathe temp er next node er connect kore deya; 
    new_node->next = temp->next;  // conect korar por temp er sathe new node er connect kore deya;
    temp->next = new_node;  //connected;
    cout<<"value insaerted at : "<<pos<<endl;
    cout<<"Now you can see your linked list."<<endl<<endl;
}
void insert_at_head(Node *&head, int val)   //head jehetu update korte hobe, ei jonno reference nite hobe;
{
    Node *new_node = new Node(val);
    Node *temp = head;     //head k temp er majhe rekhe dila.; noito head haray jaabe;
    new_node->next = temp;  //new node er next k temp er diye dilam;
    head = new_node;    //ekhon head update korlam..i.e new node k head banailam;
    cout<<"head inserted"<<endl<<endl;
}
void delete_at_any_position(Node *head, int pos)
{
    Node *delete_node = new Node(pos);
    Node *temp = head;
    //j position e delete korbo tar ager postion a amak nage jaite hobe.
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;    //oi position e gelam;
    }
    //ekehon kaj hocche, j node take delete kobo, delete_node namok noder majhe oi node taake rekhe dibo.
    //then delete node er ager node er sathe delete node er porer noder connect kore dite hobe.
    //then delete keyward diye node taake delete korte hobe;
    delete_node = temp->next;
    temp->next=temp->next->next;
    delete delete_node;
    cout<<"Node is deleted"<<endl<<endl;
}
void delete_head(Node *&head)
{
    Node *delete_head = head;
    head = head->next;
    delete delete_head;
    cout<<"head deleted"<<endl<<endl;
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : Print linked list "<<endl;
        cout<<"Option 3 : insert any position "<<endl;
        cout<<"Option 4 : insert at head "<<endl;
        cout<<"Option 5 : Delete from any Position" << endl;
        cout<<"Option 6 : Delete from head" << endl;
        cout<<"Option 7 : Terminate"<<endl;
        cout<<endl<<"choose an option : ";
        int op;
        cin>>op;
        if(op==1)
        {
            cout<< "Please enter your value : ";
            int val;
            cin>>val;
            cout<<endl;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            cout<<"Enter the value : ";
            int val;
            cin>>val;
            cout<<"Enter the position : ";
            int pos;
            cin>>pos;
            insert_any_position(head, val,pos);
        }
        else if(op==4)
        {
            cout<<"Enter a value : ";
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            cout<<"Enter a position for delete : ";
            int pos;
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_at_any_position(head,pos);
            }
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    return 0;
}