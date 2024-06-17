#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[20]={};
bool check()
{
    int ans=0;
    for(int i=1;i<=n;i++)if(a[i]==1)ans++;
    if(ans==k)return 1;
    return 0;
}
void xuat()
{
    if(check()){for(int i=1;i<=n;i++)cout<<a[i];
    cout<<endl;}
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n)xuat();
        else sinh(i+1);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        sinh(1);
    }
}
