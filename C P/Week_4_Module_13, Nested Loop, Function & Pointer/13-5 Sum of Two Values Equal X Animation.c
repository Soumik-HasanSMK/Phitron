#include<stdio.h>
int main()
{
    int i,j,x,ans=0;
    printf("Enter the total number : ");
    int n;
    scanf("%d",&n);
    printf("Enter the array with %d elements : ",n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the value of sum : ");
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==8)
                ans=1;
        }
    }
    if(ans==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
