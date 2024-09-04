#include<stdio.h>
int main()
{
    printf("Enter elements Number : ");
    int n;
    scanf("%d",&n);
    printf("Enter the array of %d elements : ",n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The Slection sort array is : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
