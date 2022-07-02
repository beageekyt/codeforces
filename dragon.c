#include<stdio.h>
int main()
{
    int n,d,i,f=0,j,k,temp,s;
    scanf("%d%d",&s,&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    scanf("%d %d",&x[i],&y[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
                temp=y[j];
                y[j]=y[j+1];
                y[j+1]=temp;
            }
        }
    }
   // for(i=0;i<n;i++)
  //  printf("%d %d\n",x[i],y[i]);
    for(i=0;i<n;i++)
    {
        if(s>x[i])
        {
            f=1;
            s=s+y[i];
        }
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