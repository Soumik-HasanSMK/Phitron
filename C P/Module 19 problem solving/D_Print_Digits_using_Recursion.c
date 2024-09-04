#include<stdio.h>
void fun(int n)
{
    if(n==0)
        return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a,x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        fun(a);
        if(a==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}