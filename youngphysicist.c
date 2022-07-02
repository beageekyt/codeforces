#include<stdio.h>
int main()
{
    int n,i,j,f=0,sum=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(j=0;j<3;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum==0)
        f=1;
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    printf("YES");
    else
    printf("NO");
    return 0;
}