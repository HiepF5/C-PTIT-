#include<bits/stdc++.h>

using namespace std;

int qhd(int a[], int n){
	int dp[n];
	dp[0] = a[0]; dp[1] = max(a[1], a[0]);
	for(int i = 2; i < n; i++){
		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
	}
	return dp[n - 1];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << qhd(a, n) << endl;
	}
}

