#include<stdio.h>
int main()
{
    int f=0,i,j;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;j<i+7;j++)
        {
            if(s[i]==s[j])
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==1)
    printf("YES");
    else
    printf("NO");
    return 0;
}