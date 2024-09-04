#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    long long int sum=0;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(sum<0)
        sum*=-1;
    printf("%lld",sum);
    return 0;
}