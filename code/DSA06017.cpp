#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a;
        a.resize(n+m);
        for(auto &i:a)cin>>i;
        sort(a.begin(),a.end());
        for(auto i:a)cout<<i<<" ";
        cout<<endl;
        //for(auto &i:b)cin>>i;

    }

}
