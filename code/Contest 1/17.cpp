#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[40];
int n;
string s;
ll maxx=0;
bool kiemtra(int ans)
{
    int k=ans;
    int res=pow(ans,1.0/3);
    if(res*res*res==k||(res+1)*(res+1)*(res+1)==k)return 1;
        //cout<<k<<" "<<res<<endl;
    return 0;
    //cout<<res<<endl;
    // return 0;
}
void xuat()
{
    ll ans=0;
    for(int i=1;i<=n;i++)if(a[i]==1)ans=ans*10+(s[i-1]-48);
    //cout<<ans<<endl;
   if(ans>maxx&&kiemtra(ans))maxx=ans;
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

        cin>>s;
        n=s.size();
        sinh(1);
        if(maxx>=1)cout<<maxx;
        else cout<<"-1";
        cout<<endl;
        maxx=0;
    }
}
