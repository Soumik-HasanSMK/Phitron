#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("Enter the line number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
