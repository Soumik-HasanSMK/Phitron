#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    scanf("%s",str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
        if(str[i]==',')
        {
            str[i]=' ';
        }
    }
    printf("%s",str);
    return 0;
}