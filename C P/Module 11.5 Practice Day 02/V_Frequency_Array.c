#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int cnt[100001]={0};
    int value;
    for(int i=0;i<n;i++)
    {
        value=arr1[i];
        cnt[value]++;
    }
    for(int i=1;i<=k;i++)
    {
        printf("%d\n",cnt[i]);
        
    }
    
    return 0;
}