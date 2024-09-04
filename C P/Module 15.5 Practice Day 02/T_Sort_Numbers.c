#include<stdio.h>
void fun(int ar[], int sz)
{
    for(int i=0;i<sz-1;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
        printf("%d\n",ar[i]);
    printf("\n");
}
int main()
{
    int i, j, ar[3];
    for( i=0;i<3;i++)
        scanf("%d",&ar[i]);

    int sm[3];
    for(j=0;j<3;j++)
        sm[j]=ar[j];
    fun(ar,3);
    for(j=0;j<3;j++)
        printf("%d\n",sm[j]);
    return 0;
}