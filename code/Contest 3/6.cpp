#include<bits/stdc++.h>
#define ll long long
int mod=1e9+7;
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long long n,k;
         cin>>n>>k;
         long long res=1;
         if(k>n)res=0;
         for(int i=n-k+1;i<=n;i++)res=(res*i)%mod;
         cout<<res<<endl;
    }

}
