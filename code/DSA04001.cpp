#include<bits/stdc++.h>

using namespace std;

int mod = 1e9+7;
long long power1(int n, int k){
	if(k == 0) return 1;
	long long x = power1(n, k / 2);
	if(k % 2 == 1) return (x * x % mod) * n % mod;
	else return x * x % mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << power1(n, k) << endl;
	}
}
