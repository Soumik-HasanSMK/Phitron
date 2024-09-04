#include<bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *arr= new int[n];       //dynamic bariable;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());     //sorting with descending order.
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int *ans=sort_it(n);     //function call;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}