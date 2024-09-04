#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int flag=0;
    int cnt=0;
    while(ss>>word)
    {   
        cnt++;
        if(word[0]<65)
            flag++;
    }
    cout<<cnt-flag<<endl;
    return 0;
}