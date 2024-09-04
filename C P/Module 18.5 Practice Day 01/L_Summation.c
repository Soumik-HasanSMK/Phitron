#include<stdio.h>
long long fun(long long ar[],long long i,int n)
{
    if(i==n)
        return 0;
        
    return ar[i]+fun(ar,i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long ar[n];
    for(long long i=0;i<n;i++)
        scanf("%lld",&ar[i]);
    printf("%lld",fun(ar,0,n));
    return 0;
}