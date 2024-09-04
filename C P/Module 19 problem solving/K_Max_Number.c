#include<stdio.h>
#include<limits.h>
int fun(int ar[],int i, int n)
{
    if(i==n) return INT_MIN;
    int mx=fun(ar,i+1,n);
    if(ar[i]>mx)
        return ar[i];
    else
        return mx;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("%d", fun(ar,0,n));
    return 0;
}