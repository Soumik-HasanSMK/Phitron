#include<stdio.h>
int main()
{
    long long int a,b,c;
    long long int cnt=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<=b && a<=c)
    {
        printf("%lld",a);
    }
    else if(b<=a && b<=c)
    {
        cnt=b;
        if((a-b)/2<=(c-b))
        {
            cnt+=(a-b)/2;
        }
        else
            cnt+=(c-b);
        printf("%lld",cnt);
    }
    else
    printf("%lld",c);
    return 0;
}