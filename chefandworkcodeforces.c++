#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,i,temp;
    cin>>q;
    while(q--)
    {
        int n,k,j=1,pr=0,f=1;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            if(temp>k)
            {
                f=0;
            }
            if(pr+temp<=k)
            {
                pr=temp+pr;
            }
            else
            {
                j++;
                pr=temp;
            }
        }
        if(f==1)
        cout<<j<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}