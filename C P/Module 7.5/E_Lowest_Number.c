#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,min,index;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }   
    }
    if(min==arr[0])
        index=0;
    printf("%d %d",min,index+1);
    return 0;
}