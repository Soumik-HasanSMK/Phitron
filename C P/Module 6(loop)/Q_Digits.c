#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);

    while (n--)
    {
        scanf("%d",&a);
        do
        {
            printf("%d ",a%10);
            a/=10;
        }
        while(a!=0);
        printf("\n");
    }
    return 0;
}