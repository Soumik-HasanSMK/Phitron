#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while ((t--))
    {
        char s[10001];
        scanf("%s",s);
        int i,cap=0,sm=0,dig=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A'&&s[i]<'Z')
                cap++;
            if(s[i]>='a'&&s[i]<'z')
                sm++;
            if(s[i]>='0'&&s[i]<'9')
                dig++;
        }
        printf("%d %d %d\n",cap,sm,dig);
    }
    return 0;
}