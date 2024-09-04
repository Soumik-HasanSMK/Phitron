#include<stdio.h>
void fun(int n) 
{
    int ar[n], min=100001, max=-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>max)
            max=ar[i];
        if(ar[i]<min)
            min=ar[i];
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}