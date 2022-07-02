#include<stdio.h>
int main()
{
    int n,temp;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        sum=sum+temp;
    }
    sum=sum/100;
    sum=sum/n;
    sum=sum*100;
    printf("%f",sum);
    return 0;

}