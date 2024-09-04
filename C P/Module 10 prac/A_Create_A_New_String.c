#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    gets(a);
    gets(b);
    int len1=strlen(a);
    int len2 = strlen(b);
    printf("%d %d\n%s %s",len1,len2,a,b);
    return 0;
}