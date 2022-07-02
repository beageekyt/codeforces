#include<stdio.h>
int main()
{
    int n,i;
    char s[]="I hate it ",a[]="I hate that ",b[]="I love it ",c[]="I love that ";
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1&&i==n)
        printf("%s",s);
        else if(i%2==0&&i==n)
        printf("%s",b);
        else if(i%2==1)
        printf("%s",a);
        else
        printf("%s",c);
    }
    return 0;
}