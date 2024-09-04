#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            arr[i]=1;
        else if(arr[i]==0)
            arr[i]=0;
        else
            arr[i]=2;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}