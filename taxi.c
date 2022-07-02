#include<stdio.h>
int main()
{
    int n,i,j,taxi=0,a[5]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);//a[3]=2 a[2]=7 14 3*4=12 a[1]=11
        a[j]++;
    }
    taxi=a[4];
    taxi=taxi+a[3];
    a[1]=a[1]-a[3];
    if(a[1]<0)
    a[1]=0;
    taxi=taxi+a[2]/2;
    if(a[2]%2==0)
    a[2]=0;
    else
    a[2]=1;
    a[1]=a[1]+a[2]*2;
    if(a[1]%4==0)
    taxi=taxi+a[1]/4;
    else
    taxi=taxi+a[1]/4+1;
    printf("%d",taxi);
    return 0;
}