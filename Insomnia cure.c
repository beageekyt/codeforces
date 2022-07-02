#include<stdio.h>
int main()
{
    long int k,l,m,n,d,i,a=0;
    scanf("%ld %ld %ld %ld %ld",&k,&l,&m,&n,&d);
    if(k==1||l==1||m==1||n==1)
    printf("%ld",d);
    else
    {
        for(i=1;i<=d;i++)
        {
            if(i%k==0||i%l==0||i%m==0||i%n==0)
            a++;
        }
          printf("%ld",a);
    }
  
    return 0;
}