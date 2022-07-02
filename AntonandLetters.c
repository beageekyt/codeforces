#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a[26]={0},ans=0; //s={b, a, b, a}
    char s[1000];
    gets(s);
    for(i=1;s[i]!='\0';i=i+3)
    {
        a[s[i]-'a']=1;
    }
    for(i=0;i<26;i++)
    {if(a[i]==1)
    ans++;}
    printf("%d",ans);
    return 0;
}