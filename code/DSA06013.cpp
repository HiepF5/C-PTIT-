#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(auto &i:a)cin>>i;
        auto it=upper_bound(a,a+n,k)-lower_bound(a,a+n,k);
        if(it==0)cout<<-1;
        else cout<<it;
        cout<<endl;

    }

}
