#include<stdio.h>
#include<string.h>
int main()
{
    char s1[21],s2[21];
    scanf("%s %s",s1,s2);
    int ans=strcmp(s1,s2);
    if(ans>0)
        printf("%s",s2);
    else if(ans<0)
        printf("%s",s1);
    else
        printf("%s",s1);
    return 0;
}