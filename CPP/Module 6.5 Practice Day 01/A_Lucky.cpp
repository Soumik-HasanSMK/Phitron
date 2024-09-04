#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string str1, str2;
        for(int i=0;i<3;i++)
            str1[i]=s[i];
        for(int i=3;i<6;i++)
            str2[i]=s[i];

        int s1 = 0, s2=0;
        for(int i=0;i<3; i++)
            s1+= (s[i]-'0');
        for(int i=3;i<6; i++)
            s2+= (s[i]-'0');

        if(s1==s2)
            cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        
    }
    return 0;
}