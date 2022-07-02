#include<stdio.h>
int main()
{
    int n,i,j,sum=0,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    j=0;
    int coin=0;
    for(i=n-1;i>=0;i--)
    {
        j=j+a[i];
        coin++;
        if(j>sum/2)
        break;
    }
    printf("%d",coin);
    return 0;
}