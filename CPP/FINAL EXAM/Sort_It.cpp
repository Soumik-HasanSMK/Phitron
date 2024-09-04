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
    if((a.math+a.eng)==(b.math+b.eng))  //jodi math & eng er sum soman hoy, 
        return a.id < b.id;             //sort korbo id er vittite, jar id aage, se serial e aage thakbe;
    else       //jodi math & eng er sum soman na hoy,
        return a.math+a.eng>b.math+b.eng;   //tahole boro sum ta ager serial pabe;
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