#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[5];
int dem(int b[],int m, int x)
{
    if(x==0)return 0;
    if(x==1)return cnt[0];
    ll res=cnt[0]+cnt[1];
    auto it=upper_bound(b,b+m,x);
    res+=(b+m)-it;
    if(x==2)res-=(cnt[4]+cnt[3]);
    if(x==3)res+=cnt[2];
    return res;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            if(b[i]<=4)cnt[b[i]]++;
        }
        sort(b,b+m);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=dem(b,m,a[i]);
        }
        cout<<ans<<endl;

    }

}
