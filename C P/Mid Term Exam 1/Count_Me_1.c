#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int two=0,tr=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            two++;
        }
        else if(ar[i]%2==0 && ar[i]%3==0)
        {
            two++;
        }
        if(ar[i]%3==0&&ar[i]%2!=0)
        {
            tr++;
        }
    }
    printf("%d %d",two,tr);
    return 0;
}