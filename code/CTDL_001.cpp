#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[50]={};
int n;
bool kiemtra()
{
    for(int i=1;i<=n/2;i++)if(a[i]!=a[n-i+1])return 0;
    return 1;
}
void xuat()
{
    if(kiemtra())
    {
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) xuat();
        else sinh(i+1);
    }
}
main()
{
    cin>>n;
    sinh(1);
}
