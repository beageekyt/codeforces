#include<stdio.h>
int main()
{
    int n,i,temp,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp==1)
        f=1;
    }
    if(f==1)
    printf("HARD");
    else
    printf("EASY");
    return 0;
}