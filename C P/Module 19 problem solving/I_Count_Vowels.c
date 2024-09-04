#include<stdio.h>
int fun(char s[],int i)
{
    if(s[i]=='\0')
        return 0;
    int ans=fun(s,i+1);
    if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='u'||s[i]=='U')
        return 1+ans;
    else 
        return ans;
}
int main()
{
    char s[201];
    gets(s);
    printf("%d",fun(s,0));
    return 0;
}