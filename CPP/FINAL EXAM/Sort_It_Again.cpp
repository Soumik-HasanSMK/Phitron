#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
        int math;
        int eng;
};
bool cmp(student a,student b) //bool function 2 ta aparameter pass korte hoy;
{
    if(a.eng==b.eng)  //jodi english er mark soman hoy, math er mark dekhbe; 
    {
        if(a.math==b.math)  //jodi math er mark o soman hoy, id dekhbe.
            return a.id < b.id;   //sort korbo id er vittite, jar id aage, se serial e aage thakbe;
        else
            return a.math>b.math;   //eng er mark soman howar por math er mark dekhbe, 
                                    //math er mark soman na hole jar math er mark beshi, se serial e aage thakbe;
    }
    else       //jodi eng er mark soman na hoy,
        return a.eng>b.eng;   //tahole boro Eng mark ager serial pabe;
}
int main()
{
    int n;
    cin>>n;
    student smk[n];     //n songkhok students er ekta group;
    for(int i=0;i<n;i++)
    {                 //getting input of the info of these students;
        cin>>smk[i].name>>smk[i].cls>>smk[i].sec>>smk[i].id>>smk[i].math>>smk[i].eng;
    }
    sort(smk,smk+n,cmp);  //for sorting call a bool function, name cmp;
    for(int i=0;i<n;i++)
        cout<<smk[i].name<<" "<<smk[i].cls<<" "<<smk[i].sec<<" "<<smk[i].id<<" "<<smk[i].math<<" "<<smk[i].eng<<endl;
    return 0;
}