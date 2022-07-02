#include<stdio.h>
int main()
{
    int n,i,j,k,r,c,R=0,C=0,eat=0;
    scanf("%d %d",&r,&c);
   // printf("%d%d",r,c);
    char s[r][c];
    for(i=0;i<r;i++)
    //{for(j=0;j<c;j++)
    {scanf("%s",s[i]);
    }
  //  printf("\n%c\n",s[2][2]);
  //  for(i=0;i<r;i++)
 //  for(j=0;j<c;j++)
  // printf("%c",s[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i][j]!='S')
            { R=C=0;
                for(k=0;k<r;k++)
                {
                    if(s[k][j]=='S')
                    R=1;
                }
                for(k=0;k<c;k++)
                {
                    if(s[i][k]=='S')
                    C=1;
                }
                if(R!=1||C!=1)
                {
                    eat++;
                }
            }
        }
    }
   printf("%d",eat);
    return 0;
}