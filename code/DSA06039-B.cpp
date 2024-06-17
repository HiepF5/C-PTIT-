#include<bits/stdc++.h>
#define ll long long
using namespace std;
int timkiem(ll a[],ll n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)if(a[i]==a[j]){cout<<a[i];return 1;}
        }
        return 0;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(auto &i:a)cin>>i;
        if(!timkiem(a,n))cout<<"NO";
        cout<<endl;
    }
}
