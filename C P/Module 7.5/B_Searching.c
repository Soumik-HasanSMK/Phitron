#include<stdio.h>
int main()
{
    int n,i,x,index;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            index=i;
            break;
        }
    }
    if(index==i)
        printf("%d",index);
    else
        printf("-1");
    return 0;
}