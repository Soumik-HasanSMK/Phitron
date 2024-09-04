#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a, maximum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>maximum)
            maximum=a;
    }
    printf("%d",maximum);
    return 0;
}