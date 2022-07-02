#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d%d",&n,&t);
    char s[n];
    scanf("%s",s);
    for(i=0;i<t;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",s);
    return 0;
    
}