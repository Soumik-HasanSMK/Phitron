#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0, j=n-1;
    bool ans=true;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        { 
            ans=false;
            break;
        }
        i++;
        j--;
    }
    if(ans)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}