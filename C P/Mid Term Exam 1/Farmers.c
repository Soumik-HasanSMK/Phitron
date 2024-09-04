#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,ans,d;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1)
        {
            d=c/(a+b);
            ans=c-d;
        }
        else
        {
            d=(a*c)/(a+b);
            ans=c-d;
        }
        
        printf("%d\n",ans);
    }
    
    return 0;
}