#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, i,temp,sellprice;
    cin>>t;
    for (i = 0; i < t; i++)
    {
       int maxans=0 ;
        cin>>n;
        priority_queue<int> pq;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            pq.push(temp);
        }
//showpq(pq);
        for(int j=0;j<n;j++)
        {
            if(pq.top()-j>0)
            {
                maxans+=pq.top()-j;
                pq.pop();
            }
            else 
            break;
        }
        cout<<maxans<<endl;
    }

    return 0;
}