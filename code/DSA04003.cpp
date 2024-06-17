#include<bits/stdc++.h>

using namespace std;

int mod = 123456789;
long long power1(int n, long long k){
	if(k == 0) return 1;
	long long x = power1(n, k / 2);
	if(k % 2 == 1) return (x * x % mod) * n % mod;
	else return x * x % mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << power1(2, n - 1) << endl;
	}
}
