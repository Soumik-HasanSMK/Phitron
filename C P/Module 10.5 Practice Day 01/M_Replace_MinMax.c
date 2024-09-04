#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max_index,min_index;
    int min=1000000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
        }
    }
    int max=-1000000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
    }
    int temp = arr[max_index];
    arr[max_index]=arr[min_index];
    arr[min_index]=temp;
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}