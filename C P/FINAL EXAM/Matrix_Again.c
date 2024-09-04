#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }
    for(int j=0;j<n;j++)    //jehetu last row print korte hobe, so row fixed; amake shudhu j++ kore column number barate hobe.
    {
        printf("%d ",mat[m-1][j]);      //last row set(m-1);
    }
    printf("\n");
    for(int i=0;i<m;i++)    //jehetu last column print korte hobe, so column fixed; amake shudhu i++ kore row number barate hobe.
    {
        printf("%d ",mat[i][n-1]);      //last column set(n-1)
    }
    return 0;
}