#include<stdio.h>
void changecase(char s[100])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
        else
        s[i]=s[i]-32;
    }
}
int main()
{
    int i=0,f=0;
    char s[100];
    scanf("%s",s);
    if(s[0]>=65&&s[0]<=90)
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>=65&&s[i]<=90)
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            changecase(s);
            printf("%s",s);
        }
        else
        printf("%s",s);
    }
    else
    {  f=1;
        for(i=1;s[i]!='\0';i++)
        {
            if(s[i]>=65&&s[i]<=90)
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            changecase(s);
            printf("%s",s);

        }
        else
        printf("%s",s);
    }
    return 0;
}