#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[50]={};
int b[50]={};
set<int> c;
vector<int>v;
void xuat()
{
    for(int i=1;i<=k;i++)cout<<v[a[i]-1]<<" ";
    cout<<endl;
}
void sinh(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        if(b[i]==0)
        {
            b[i]=1;
            a[i]=j;
            if(i==k)xuat();
            else sinh(i+1);
            b[i]=0;
        }
    }
}
main()
{
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            c.insert(x);
        }
        for(auto i:c)v.push_back(i);
        //for(auto i:v)cout<<i;
        n=v.size();
        a[0]=0;
        sinh(1);
}
