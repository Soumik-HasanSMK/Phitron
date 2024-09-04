#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            s1+=arr[i];
        else
            s2+=arr[i];
    }
    printf("%d %d",s1,s2);
    return 0;
}