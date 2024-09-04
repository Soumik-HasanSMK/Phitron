#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int len;
        scanf("%d",&len);
        char str[100001];
        scanf("%s",str);
        int t=0, p=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='T')
            t++;
            else
            p++;
        }
        if(t>p)
            printf("Tiger\n");
        else if(p>t)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }
    return 0;
}