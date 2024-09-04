#include<stdio.h>
int main()
{
    int min,max,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    {
        min=c;
        max=a;
    }
    else if(a>c&&c>b)
    {
        min=b;
        max=a;
    }
    else if(c>b&&b>a)
    {
        min=a;
        max=c;
    }
    else if(c>a&&a>b)
    {
        min=b;
        max=c;
    }
    if(b>a&&a>c)
    {
        min=c;
        max=b;
    }
    if(b>c&&c>a)
    {
        min=a;
        max=b;
    }
    else if(a==b && a>c)
    {
        min=c;
        max=a;
    }
    else if(a==b && c>a)
    {
        min=a;
        max=c;
    }
    else if(a==c && a>b)
    {
        min=b;
        max=a;
    }
    else if(a==c && b>a)
    {
        min=a;
        max=b;
    }
    else if(b==c && a>b)
    {
        min=b;
        max=a;
    }
    else if(b==c && b>a)
    {
        min=a;
        max=b;
    }
    else if(a==b&&a==c)
    {
        min=a;
        max=b;
    }
    printf("%d %d",min,max);
    return 0;
}