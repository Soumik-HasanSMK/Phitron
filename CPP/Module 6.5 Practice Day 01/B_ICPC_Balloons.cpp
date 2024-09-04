#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt[26]={1};  //26 ta character er jonno 26 size er ekta array;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int ind=s[i]-'A';
            cnt[ind]++;
        }
        for(int i=0;i<26;i++)
            sum+=cnt[i];

        cout<<sum<<endl;
    }
    return 0;
}