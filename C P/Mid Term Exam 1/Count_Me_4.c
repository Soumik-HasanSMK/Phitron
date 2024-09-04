#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    int fre[26]={0}, i,ind;
    for(i=0;s[i]!='\0';i++)
    {
        ind=s[i]-'a';
        fre[ind]++;
    }
    for(i=0;i<26;i++)
    {
        if(fre[i]!=0)
        printf("%c - %d\n",i+'a',fre[i]);
    }
    return 0;
}