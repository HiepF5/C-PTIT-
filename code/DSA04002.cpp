#include<bits/stdc++.h>
#define ll long long int
int mod = 1e9+7;
using namespace std;
ll dao(ll n)
{
    ll t=0;
    while(n)
    {
        t=t*10+n%10;
        n/=10;
    }
    return t;
}
long long power1(ll n, ll k){
	if(k == 0) return 1;
	long long x = power1(n, k / 2);
	if(k % 2 == 1) return (x * x % mod) * n % mod;
	else return x * x % mod;
}
long long power2(int n, int k){
	long long res = 1;
	while(k){
		if(k % 2 == 1){
			res = res * n % mod;
		}
		n = n * n % mod;
		k /= 2;
	}
	return res;
}

ll luythua(ll a,ll b)
{
    ll res=1;
    for(ll i=b;i;i>>=1)
    {
        if(i&1)res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m=dao(n);
        cout<<power1(n,m)<<endl;
    }

}
