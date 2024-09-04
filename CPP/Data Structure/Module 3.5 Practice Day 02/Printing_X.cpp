#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==l && i==l)
                cout<<"X";
            else if(i==j)
                cout<<"\\";
            else if(j==n-i+1)
                cout<<"/";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}