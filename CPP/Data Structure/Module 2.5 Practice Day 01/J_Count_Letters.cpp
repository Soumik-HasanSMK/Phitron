#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>freq(26,0);
    int val;
    for(int i=0;i<s.size();i++)
    {
        val=s[i]-'a';
        freq[val]++;
    }
    for(int i=0;i<26;i++)
    {
        char tmp=i+'a';
        if(freq[i]>0)
        {   
            cout<<tmp<<" : "<<freq[i]<<endl;
            freq[tmp]=0;
        }
    }
    return 0;
}