#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,s;
int l[50]={};
int a[50]={};
int d=0;
bool kiemtra()
{
    int t=0;
    for(int i=1;i<=n;i++)if(a[i]==1)t+=l[i];
    if(t==s)return 1;
    return 0;
}
void xuat()
{
    if(kiemtra())
    {
        for(int i=1;i<=n;i++)if(a[i]==1)cout<<l[i]<<" ";
        cout<<endl;
        d++;
    }

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
    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>l[i];
    sinh(1);
    cout<<d;
}
