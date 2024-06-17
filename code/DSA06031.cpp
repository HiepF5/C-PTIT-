#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        multiset<ll>s;
        vector<ll>v(n);
        for(auto &i:v)cin>>i;
        for(ll i=0;i<k;i++)s.insert(v[i]);
        for(ll i=k;i<=n;i++)
        {
            cout<<*s.rbegin()<<" ";
            s.erase((s.find(v[i-k])));
            s.insert(v[i]);
        }
        cout<<endl;
    }

}
