#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k,s,ans=0;
int a[50]={};
int b[50]={};
void xuat()
{
    int res=0;
    for(int i=1;i<=k;i++)res+=a[i];
    if(res==s)ans++;
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
    while(1)
    {
        ans=0;
        cin>>n>>k>>s;
        if(n==0&&k==0&&n==0)break;
        a[0]=0;
        sinh(1);
        cout<<ans<<endl;
    }
}
