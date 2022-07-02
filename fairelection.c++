#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,j,q,n,m;
    cin>>q;
    for(k=0;k<q;k++ )
    {
        int sum1=0,sum2=0,temp;
        cin>>n>>m;
        vector<int> a;
        vector<int> b;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            sum1=sum1+temp;
            a.push_back(temp);
        }
        for(i=0;i<m;i++)
        {
            cin>>temp;
            sum2=sum2+temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        temp=min(m,n);
        int f=0;
        if(sum1>sum2)
        cout<<0<<endl;
        else
        {
            for(i=0;i<temp;i++)
            {
                sum1=sum1+b[i]-a[i]; 
                sum2=sum2-b[i]+a[i]; 
                if(sum1>sum2)
                {
                    cout<<i+1<<endl;
                    f=1;
                    break;
                }
            }
            if(f==0)
            cout<<"-1"<<endl;
        }
    }
    return 0;
}