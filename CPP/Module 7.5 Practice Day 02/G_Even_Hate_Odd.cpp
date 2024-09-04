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
        int arr[n];
        int cnt_even=0;
        int cnt_odd=0;
        int ans=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n%2!=0)
            ans=-1;
        else
        {
            for(int i=0;i<n;i++)
            {    
                if(arr[i]%2==0)
                    cnt_even++;
                else
                    cnt_odd++;
            }
            if(cnt_even==cnt_odd)
                ans=0;
            else if(cnt_even>cnt_odd)
                ans=(cnt_even-cnt_odd/2);
            else
                ans=(cnt_odd-cnt_even)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}