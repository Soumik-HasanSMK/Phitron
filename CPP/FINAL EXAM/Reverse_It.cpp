#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
};
int main()
{
    int n;
    cin>>n;
    student smk[n];     //n songkhok students er ekta group;
    for(int i=0;i<n;i++)
    {
        cin>>smk[i].name>>smk[i].cls>>smk[i].sec>>smk[i].id;    //getting input of the info of these studenys;
    }
    int i=0, j=n-1;
    while(i<j)
    {       //scction er reverse kaj korteche, but others info no change;
        swap(smk[i].sec,smk[j].sec);    // tahole sudhu section ta reversely swap kore dibo; ei khetre baki sob info thik thakbe;
        i++;
        j--;
    }
    //finally get the output;
    for(int i=0;i<n;i++)
        cout<<smk[i].name<<" "<<smk[i].cls<<" "<<smk[i].sec<<" "<<smk[i].id<<endl;
    return 0;
}