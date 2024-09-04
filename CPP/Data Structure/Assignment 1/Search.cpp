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
{   //tail er maddhome linked list input nilam, karon complexity kom;
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
void find(Node *head,int x)
{
    Node *temp=head;
    int cnt=0;
    int flag=0;  //shurute flag 0 dhorlam;
    while(temp!=NULL)
    {
        cnt++;   //koto position  a pabo ,setar count kori;
        if(temp->val==x)    //searching x in the linked list;
        {
            flag=1; //x peye gele flag 1 kore break korlam;
            break;
        }
        temp=temp->next;
    }
    if(flag==1) //jehetu indext 0 theke start, so count theke 1 minus korte hobe;
        cout<<cnt-1<<endl;
    else
        cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)  //for test case;
    {
        Node *head = NULL;
        Node *tail = NULL;
        while(true)
        {
            int val;
            cin>>val;
            if(val==-1)
                break;
            insert_tail(head,tail,val); //linked list input neyar jonno insert_tail function call korlam;
        }
        int x;
        cin>>x;
        find(head,x);  //head and searching value k find function a pass korlam;
    }
    return 0;
}