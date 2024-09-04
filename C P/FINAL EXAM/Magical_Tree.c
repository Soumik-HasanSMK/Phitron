#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=6+n/2;         /*n is odd number...n barteche, line songkha o 1 ta kore barteche;
                            prottek test case check korle dekha jay 6+n/2 korle proti test case e 
                            line 1 ta korei bere jasce...so line control kora jasce 6+n/2 diye.*/
    for(int i=1;i<=line;i++)
    {
        for(int j=1;j<=line-i;j++)
            printf(" ");            //space print
        for(int j=1;j<=2*i-1;j++)
            printf("*");            //star print
        printf("\n");
    }
    for(int i=1;i<=5;i++)       //line always 5 ta.
    {
        for(int j=1;j<=5;j++)
            printf(" ");        //space o 5 ta fixed.
        for(int j=1;j<=n;j++)
            printf("*");        //n joto, star o toto.
        printf("\n");
    }
    return 0;
}