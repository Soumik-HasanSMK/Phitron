#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int  i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int x,ans=0;
        scanf("%d",&x);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
                ans=1;
        }
        if(ans==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}