#include<bits/stdc++.h>
#define ll long long int
int mod=1e9+7;
using namespace std;
ll luythua(ll a, ll b)
{
    ll res=1;
    for(ll i=b;i;i>>=1)
    {
        if(i&1)res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}
ll power1(ll n, ll k){
	if(k == 0) return 1;
	ll x = power1(n, k / 2);
	if(k % 2 == 1) return (x * x % mod) * n % mod;
	else return x * x % mod;
}
main()
{
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        else
        {
            cout<<power1(a,b)<<endl;
        }
    }

}
