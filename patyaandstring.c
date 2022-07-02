#include<stdio.h>
#include<string.h>
char s[100],a[100];
void capital(char s[100])
{
    for(int i=0;s[i]!='\0';i++)
    if(s[i]>=97)
    s[i]=s[i]-32;
}
int main()
{
    int r=0;
    gets(s);
    gets(a);
    capital(s);
    capital(a);
   // puts(s);
    //puts(a);
    r=strcmp(s,a);
    printf("%d",r);
    return 0;
}
