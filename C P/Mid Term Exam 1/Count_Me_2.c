#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",str);
    int i, len=strlen(str), vow=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vow++;
    }
    printf("%d",len-vow);
    return 0;
}