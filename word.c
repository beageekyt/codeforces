#include<stdio.h>
void capital(char s[100])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97)
        s[i]=s[i]-32;
    }
}
void small(char s[100])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<=90)
        s[i]=s[i]+32;
    }
}
int main()
{
    char s[100];
    int u=0,l=0,i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97)
        l++;
        else
        u++;
    }
    if(u>l)
    capital(s);
    else
    small(s);
    printf("%s",s);
    return 0;
    
}