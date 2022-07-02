#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,l,b,t;
    cin>>l>>b;
    cin>>t;
    while(t--)
    {
        int lh,bh;
        cin>>lh>>bh;
        i=lh/l;
        j=bh/b;
        cout<<max((lh/l)*(bh/b),(lh/b)*(bh/l));
    }
    
    return 0;
}