#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a'&&c<='y')
    {
        c+=1;
        printf("%c",c);
    }
    else
        printf("a");
    return 0;
}