#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],dp[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        dp[1]=a[1];
        dp[2]=a[2];
        dp[3]=a[1]+a[3];
        for(int i=4;i<=n;i++)dp[i]=max(dp[i-2],dp[i-3])+a[i];
        cout<<*max_element(dp+1,dp+n+1)<<endl;
       // sort(dp,dp+1+n);
        //cout<<dp[n]<<endl;
    }

}
