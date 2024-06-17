#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[10005];
void solve()
{
    dp[0]=1;
    int a2=2,a3=3,a5=5,i2=0,i3=0,i5=0;
    for(int i=1;i<=1001;i++)
    {
        dp[i]=min(a2,min(a3,a5));
        if(dp[i]==a2)i2++;a2=dp[i2]*2;
        if(dp[i]==a3)i3++;a3=dp[i3]*3;
        if(dp[i]==a5)i5++;a5=dp[i5]*5;
    }
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
        cout<<dp[n-1]<<endl;
    }

}
