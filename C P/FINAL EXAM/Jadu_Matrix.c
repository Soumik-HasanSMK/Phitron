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
    int ans=1;
    if(m!=n)
        ans=0;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==m-1 || i==j)
            {
                if(mat[i][j]!=1)
                    ans=0;
            }
            else if(mat[i][j]!=0)
                ans=0;
        }
    }
    if(ans==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}