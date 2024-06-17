#include<bits/stdc++.h>

using namespace std;
int mod = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long b[n + 1] = {0};
		b[0] = 1; b[1] = 1;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= min(i, k); j++){
				b[i] += b[i - j];
				b[i] %= mod;
			}
		}
		cout << b[n] << endl;
	}
}
