#include<bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *ar= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main()
{
    int n;
    cin>>n;
    int *ans=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}