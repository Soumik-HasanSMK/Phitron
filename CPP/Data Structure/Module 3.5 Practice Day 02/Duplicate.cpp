#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);    
    for(int i=0;i<n;i++)    //vector input
        cin>>v[i];
    sort(v.begin(),v.end());    //sort kore nilam; jodi duplicate elements thake, tobe pashapashi thakbe;
    int smk=0;
    for(int i=0;i<n-1;i++)  //loop chaliye check kore dekhbo i-th index er element  (i+1)th index element er same kina,,,tai loop chalabo n-1 porjonto; 
    {
        if(v[i]==v[i+1])    //jodi i-th index er element  (i+1)th index element er same hoy, tahole condition true kore break;
        {
            smk=1;
            break;
        }
    }
    if(smk==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}