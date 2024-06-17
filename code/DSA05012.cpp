#include<bits/stdc++.h>
#define ll long long
int mod =1e9 +7;
using namespace std;
ll c[1005][1005];
void tohop()
{
    for(int i=0;i<=1000;i++)
        for(int j=0;j<=i;j++)
    {
        if(j==0||j==i)c[i][j]=1;
        else c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
    }
}
main()
{
    tohop();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<c[n][k]<<endl;

    }
}
