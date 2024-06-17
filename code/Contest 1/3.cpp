#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int b[50];
int a[50];
int ans=0;
bool kiemtra()
{
    int res=0;
    for(int i=1;i<=n;i++)if(b[i]==1)res+=a[i];
    if(res==k)return 1;
    return 0;
}
void xuat()
{
    if(kiemtra())
    {for(int i=1;i<=n;i++)if(b[i]==1)cout<<a[i]<<" ";cout<<endl;ans++;}
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
    {
        b[i]=j;
        if(i==n)xuat();
        else sinh(i+1);
    }
}

main()
{
    //int n, k;
    cin>>n>>k;

    for(int i=1;i<=n;i++)cin>>a[i];
    sinh(1);
    cout<<ans;

}
