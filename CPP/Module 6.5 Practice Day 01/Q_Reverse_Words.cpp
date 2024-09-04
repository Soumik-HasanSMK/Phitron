#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        if(cnt)
            cout<<" ";
            
        cnt=1;
        cout<<word;
    }
    return 0;
}