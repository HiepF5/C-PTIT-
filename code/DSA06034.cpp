#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vector<ll> v(n);
        for(auto &i:v)cin>>i;
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            auto it=upper_bound(v.begin()+i,v.end(),k-v[i])-lower_bound(v.begin()+i,v.end(),k-v[i]);
            ans+=it;
            //cout<<it<<" "<<endl;
            if(k-v[i]==v[i])ans--;
        }
        cout<<ans<<endl;
    }

}
