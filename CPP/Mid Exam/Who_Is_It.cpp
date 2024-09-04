#include<bits/stdc++.h>
using namespace std;
class info
{
    public:
        int id;
        char name[100];
        char section[5];
        int mark;
    
    info(int id, char name[], char section[], int mark)
    {
        this->id=id;
        strcpy(this->name, name);      //string k directly lekha jayna,,,tai copy kore dite hoy;
        strcpy(this->section, section);     //string k directly lekha jayna,,,tai copy kore dite hoy;
        this->mark=mark;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int id,mark;
        char name[100], section[5];
        //for 1st student;
        cin>>id>>name>>section>>mark;
        info *s1=new info(id,name,section,mark);    //pass all info of student 1 to the constructor;
        //for 2nd student;
        cin>>id>>name>>section>>mark;
        info *s2=new info(id,name,section,mark);    //pass all info of student 2 to the constructor;
        //for 3rd student;  
        cin>>id>>name>>section>>mark;
        info *s3=new info(id,name,section,mark);    //pass all info of student 3 to the constructor;

//ekhon kaj student er mark compare kora...using max func..
        if(max({s1->mark, s2->mark, s3->mark})==s1->mark)
            cout<< s1->id<<" "<<s1->name<<" "<<s1->section<<" "<<s1->mark<<endl;        

        else if(max({s1->mark, s2->mark, s3->mark})==s2->mark)
            cout<< s2->id<<" "<<s2->name<<" "<<s2->section<<" "<<s2->mark<<endl;
            
        else if(max({s1->mark, s2->mark, s3->mark})==s3->mark)
            cout<< s3->id<<" "<<s3->name<<" "<<s3->section<<" "<<s3->mark<<endl;
        
    }
    return 0;
}