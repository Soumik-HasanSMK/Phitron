#include<stdio.h>
int my_len(char *s)
{
    int len=0;
    for(int i=0;s[i]!='\0';i++)
        len++;
    return len;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int len=my_len(s);
    printf("%d\n",len);
    return 0;
}
