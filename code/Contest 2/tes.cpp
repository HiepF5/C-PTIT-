#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mod =1e9 +7;
int qhd(int n, int k)
{
    int F[100005]={0},i,j;
    F[1]=1;F[0]=1;
    for(int i=2;i<=n;i++)
        for(j=0;j<=min(i,k);j++)
    {
        F[i]=(F[i]+F[i-j])%mod;
    }
    return F[n];
}
main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<qhd(n,k)<<endl;
    }
}
