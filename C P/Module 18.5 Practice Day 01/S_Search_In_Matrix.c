#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }
    int x;
    int flag=0;
    scanf("%d",&x);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==x)
                flag=1;
        }
    }
    if(flag)
        printf("will not take number");
    else
        printf("will take number");
    return 0;
}