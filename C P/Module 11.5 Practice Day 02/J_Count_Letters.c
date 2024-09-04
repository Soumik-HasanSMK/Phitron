#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int freq[26]={0};
    while(scanf("%c",&ch)!=EOF)
    {
        int indx=ch-'a';
        freq[indx]++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
            printf("%c : %d\n",i+'a',freq[i]);
    }
    return 0;
}