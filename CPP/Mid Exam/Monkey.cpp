#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001]; 
    while(cin.getline(s,100001))    //Use of EOF; jotobar iccha string input nite parbe;
    {
        int L=strlen(s);
        sort(s,s+L);        //sorting string;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]!=' ')      //avoid white space;
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}