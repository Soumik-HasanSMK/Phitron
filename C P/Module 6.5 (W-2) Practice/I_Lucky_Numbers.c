#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    a=n/10;
    b=n%10;
    if(b==0||a%b==0 || b%a==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}