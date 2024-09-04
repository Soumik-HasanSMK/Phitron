#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
     if(n<2)
            printf("-1");
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
       
    }
    return 0;
}