#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char str[101];
    while(t--)
    {
        scanf("%s",&str);
        int i,mid;
        for(i=0;i<strlen(str);i++)
        {
            if(strlen(str)>10)
            {
                mid=strlen(str)-2;
                printf("%c%d%c\n",str[i],mid,str[strlen(str)-1]);
                break;
            }
            else
                {
                    printf("%s\n",str);
                    break;
                }
        }
        
    }
    return 0;
}