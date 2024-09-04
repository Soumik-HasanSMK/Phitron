#include<stdio.h>
#include<stdlib.h>
int my_abs(int n)
{
    int x=abs(n);
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    int abs=my_abs(n);
    printf("%d\n",abs);
    return 0;
}
