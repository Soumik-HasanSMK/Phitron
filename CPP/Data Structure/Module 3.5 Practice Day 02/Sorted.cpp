#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ans=true;   //first time ans tru e dhorlam;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1]) //check korbo jodi i9-th index er element (i+1)-th ide3x er element er cheeye boro hoy taholei ans false; then break;
            {
                ans=false;
                break;
            }
        }
        if(ans==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}