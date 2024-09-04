#include<stdio.h>
int main()
{
    int n,a,even=0,neg=0,pos=0,odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                even++;
            if(a<0)
                neg++;
            if(a>0)
                pos++;
            if(a%2!=0)
                odd++;
        }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}