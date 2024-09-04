#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],s_rev[1001];
    scanf("%s",str);
    int i,len=strlen(str);
    int j=0;
    for(i=len-1;i>=0;i--)
    {
        s_rev[j]=str[i];
        j++;
    }
    s_rev[j]='\0';
    if(strcmp(str,s_rev)==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}