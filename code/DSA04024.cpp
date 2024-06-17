#include<bits/stdc++.h>

using namespace std;

int n, k, mod = 1e9+7;

void mul(long long a[20][20], long long tmp[20][20]){
	long long res[20][20];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			res[i][j] = 0;
			for(int k = 0; k < n; k++){
				res[i][j] += a[i][k] * tmp[k][j] % mod;
				res[i][j] %= mod;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j ++) a[i][j] = res[i][j];
	}
}

void process(long long a[20][20]){
	long long ans[20][20];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) ans[i][j] = 1;
			else ans[i][j] = 0;
		}
	}
	while(k){
		if(k % 2 == 1){
			mul(ans, a);
		}
		mul(a, a);
		k /= 2;
	}
	long long sum = 0;
	for(int i = 0; i < n; i++){
		sum += ans[i][n - 1] % mod;
		sum %= mod;
	}
	cout << sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		long long a[20][20];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> a[i][j];
		}
		process(a);
	}
}
