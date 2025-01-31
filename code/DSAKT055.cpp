#include<bits/stdc++.h>

using namespace std;

int qhd(int a[], int c[], int n, int v){
	int dp[n + 1][v + 1];
	for(int i = 0; i <= n; i++){
		dp[i][0] = 0;
	}
	for(int i = 0; i <= v; i++){
		dp[0][i] = 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= v; j++){
			if(a[i] <= j){
				dp[i][j] = max(dp[i - 1][j - a[i]] + c[i], dp[i - 1][j]);
			}
			else{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][v];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int a[n + 1], c[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
			cin >> c[i];
		}
		cout << qhd(a, c, n, v) << endl;
	}
}
