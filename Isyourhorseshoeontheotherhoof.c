#include<stdio.h>
int main()
{
    int i,j,ans=0;
    long int a[4],temp;

    for(i=0;i<4;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<4-1;i++)
    {
        for(j=0;j<4-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<4-1;i++)
    {
        if(a[i]==a[i+1])
        ans++;
    }
    printf("%d",ans);
    return 0;
}