#include<stdio.h>
int main()
{
    int n,i,j,max=0,temp,ans=0,total=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp>=max)
        {
            ans++;
            max=temp;
        }
        else
        {
            ans=1;
            max=temp;
        }
        if(total<ans)
        total=ans;
    }
    printf("%d",total);
    return 0;
}