#include<stdio.h>
int main()
{
    long long n;
    int a=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        if(n%10==7||n%10==4)
        a++;
        n=n/10;
    }
    if(a==7||a==4)
    printf("YES");
    else
    printf("NO");
    
    return 0;
    
}