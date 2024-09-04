#include<stdio.h>
void swap_it(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    swap_it(p1,p2);
    printf("%d %d",a,b);
    return 0;
}
