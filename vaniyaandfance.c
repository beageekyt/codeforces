#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}