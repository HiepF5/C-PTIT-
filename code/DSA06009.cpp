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
        int res=0;
        sort(a,a+n);
        for(auto i=0;i<n;i++)
        {
            auto it=upper_bound (a+i+1,a+n,k-a[i])-lower_bound(a+i+1,a+n,k-a[i]);
            res+=it;
           // cout<<it;
        }
        cout<<res<<endl;
    }

}
