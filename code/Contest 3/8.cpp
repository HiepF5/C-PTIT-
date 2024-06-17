#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[10002];
void solve()
{
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=10000;i++)
    {
        dp[i]=i;
        for(int j=1;j<=sqrt(i);j++)
        {
            dp[i]=min(dp[i],dp[i-j*j]+1);
        }
    }
    //for(int i=1;i<=100;i++)cout<<dp[i]<<" ";
}
main()
{
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }

}
