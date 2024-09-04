#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    char str[1001];
    strcpy(str,s);
    int l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        int temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    int m=strcmp(str,s);
    if(m==0)
        return 1;
    else 
        return 0;

}
int main()
{
    char s[1001];
    scanf("%s",s);
    int ans= is_palindrome(s);
    if(ans==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}