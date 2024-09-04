#include<stdio.h>
void fun(int ar[],int i, int n)
{
    if(i>=n)
        return;
    if(i%2==0)
    {
        fun(ar,i+2,n);
        printf("%d ",ar[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    fun(ar,0,n);
    return 0;
}