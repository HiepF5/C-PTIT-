#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(auto &i:a)cin>>i;
        for(auto &i:b)cin>>i;
        sort(a,a+n);
        sort(b,b+m);
        cout<<a[n-1]*b[0]<<endl;

    }

}
