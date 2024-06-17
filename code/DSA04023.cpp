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
        vector<ll> a(n);
        for(auto &i:a)cin>>i;
        sort(a.begin(),a.end());
        ll res=0;
        for(ll i=0;i<n;i++)
        {
            auto it=lower_bound(a.begin()+i+1,a.begin()+n,a[i]+k);//-lower_bound(a.begin()+j,a.end(),a[i]+k);

            res=res+it-a.begin()-(i+1);
            //cout<<it-a.begin()-(i+1);
           // cout<<it-a.begin()<< " ";
        }
        cout<<res<<endl;
    }

}
/*#include<bits/stdc++.h>

using namespace std;

long long bs(long long a[], long long l, long long r, long long x){
	long long pos = -1;
	while(l <= r){
		long long m = (l+r)/2;
		if(a[m] < x){
			l = m + 1;
			pos = m;
		}
		else r = m - 1;
	}
	return pos;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a, a + n);
		long long ans = 0 ;
		for(long long i = 0; i < n - 1; i++){
			long long pos = bs(a, i + 1, n - 1, a[i] + k);
			if(pos != -1){
				ans += (pos - i);
				//cout<<pos;
			}
		}
		cout << ans << endl;
	}
}
*/
