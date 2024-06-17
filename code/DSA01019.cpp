#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[20]={};
string l="AH";
bool check()
{
    if(a[1]==1&&a[n]==0)
    {
        for(int i=1;i<=n;i++)if(a[i]==a[i+1]&&a[i]==1)return 0;
        return 1;
    }
    else return 0;
}
void xuat()
{
    if(check()){for(int i=1;i<=n;i++)cout<<l[a[i]];
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

        cin>>n;
        sinh(1);
    }
}
