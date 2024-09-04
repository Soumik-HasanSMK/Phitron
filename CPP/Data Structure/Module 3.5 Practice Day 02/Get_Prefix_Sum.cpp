#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<long long>v1(n);    //another vector for the prefix sum;
    v1[0]=v[0];    //1st index er element ta hobe prefix sum er 1st element;
    for(int i=1;i<n;i++)
    {
        v1[i]=v1[i-1]+v[i];     //like comulative frequency;
    }
    reverse(v1.begin(),v1.end());   //reverse kora hoilo;
    for(long long c: v1)
        cout<<c<<" ";
    return 0;
}