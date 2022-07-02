#include<stdio.h>
int main()
{
    int a,b,c,ans,temp;
    scanf("%d %d %d",&a,&b,&c);
    ans=a*b*c;
    if(a+b+c>ans)
    ans=a+b+c;
    if((a+b)*c>ans)
    ans=(a+b)*c;
    if(a*(b+c)>ans)
    ans=a*(b+c);
    if(a*b+c>ans)
    ans=a*b+c;
    if(a+b*c>ans)
    ans=a+b+c;
    printf("%d",ans);
    return 0;

}