#include<stdio.h>
int main()
{
    int n,k;
    long long int sum=0;
    scanf("%d %d",&n,&k);
    long long int arr[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
            break;
        sum+=arr[i];
    }
    printf("%lld",sum);
    return 0;
}