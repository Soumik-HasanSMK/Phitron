#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%.2f", b/(1-a*.01));
    return 0;
}