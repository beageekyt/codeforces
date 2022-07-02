#include<stdio.h>
int main()
{
    int a[4][4],i,j,b[4][4];
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            a[i][j]=1;
            scanf("%d",&b[i][j]);
            if(b[i][j]%2==0)
            b[i][j]=0;
            else
            b[i][j]=1;
           // printf("%d ",b[i][j]);
        }
        //printf("\n");
    }
    /*for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }*/
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(b[i][j]==1)
            {
                if(a[i][j]==1)
                a[i][j]=0;
                else
                a[i][j]=1;

                if(a[i+1][j]==1)
                a[i+1][j]=0;
                else
                a[i+1][j]=1;

                if(a[i-1][j]==1)
                a[i-1][j]=0;
                else
                a[i-1][j]=1;

                if(a[i][j-1]==1)
                a[i][j-1]=0;
                else
                a[i][j-1]=1;

                if(a[i][j+1]==1)
                a[i][j+1]=0;
                else
                a[i][j+1]=1;
            }
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
return 0;
}