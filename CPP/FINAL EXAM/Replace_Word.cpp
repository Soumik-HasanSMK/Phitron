#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int size=b.size();      //b string er size ber kore nilam;
        while(a.find(b)!=-1)    
                                /*last porjont find korbo, jotokkhon na porjonto replace kora ses hoy, 
                                find korbo; ses porjonto na paowa gele er value -1 hoy;*/
        {
            a.replace(a.find(b),size,"#");  //"#" diye replace korlam;
        }
        cout<<a<<endl;
    }
    return 0;
}