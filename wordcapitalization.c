#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    if(s[0]>=97&&s[0]<=122)
    s[0]=s[0]-32;
    printf("%s",s);
    return 0;
    
}