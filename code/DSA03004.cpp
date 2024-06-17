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
        int a[n];
        for(auto &i:a)cin>>i;
        sort(a,a+n);
        ll k=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)k=k*10+a[i];
            else m=m*10+a[i];
        }
        cout<<k+m<<endl;
    }

}
