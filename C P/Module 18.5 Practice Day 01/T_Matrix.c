#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }
    long long sum1=0, sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1+=mat[i][j];
            }
            if((i+j)==(n-1))
            {
                sum2+=mat[i][j];
            }
        }
    }
    long long ans=abs(sum1-sum2);
    printf("%lld",ans);
    return 0;
}