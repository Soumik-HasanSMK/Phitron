#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n], b[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);     //array 1;
        for(int i=0;i<n;i++)
            b[i]=a[i];        //array 2, copy of array 'a', name array 'b'
        
        //for sorting array 'b': using selection sort
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        int c[n];       //array 3
        for(int i=0;i<n;i++)
        {
            c[i]=abs(a[i]-b[i]);
        }
        //final answer:
        for(int i=0;i<n;i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    return 0;
}