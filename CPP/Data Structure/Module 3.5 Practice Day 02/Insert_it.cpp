#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector<int>v1(m);
    for(int i=0;i<m;i++)
        cin>>v1[i];
    int n;
    cin>>n;
    vector<int>v2(n);
    for(int i=0;i<n;i++)
        cin>>v2[i];
    int x;
    cin>>x;
    v1.insert(v1.begin()+x,v2.begin(),v2.end());
    for(int val:v1)
        cout<<val<<" ";
    return 0;
}