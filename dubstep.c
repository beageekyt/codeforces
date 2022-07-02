#include<stdio.h>
int main()
{
    int i,f=1;
    char s[200];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(f==0)
            printf(" ");
            i=i+2;
        }
        else
        {
            printf("%c",s[i]);
            
            f=0;
        }
    }
    return 0;
}
