#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    scanf("%s %s",s1,s2);
    char temp[30];
    strcpy(temp,s1);
   
    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s\n",strcat(s1,s2));
    temp[0]=s2[0];
    s2[0]=s1[0];
    printf("%s %s",temp,s2);
    return 0;
}