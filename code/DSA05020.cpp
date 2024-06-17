#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m + 1][n + 1];
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		int dp[m + 1][n + 1] = {0};
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				if(i == 1){
					dp[i][j] = a[i][j] + dp[i][j - 1];
				}
				else if(j == 1){
					dp[i][j] = a[i][j] + dp[i - 1][j];
				}
				else{
					dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j])) + a[i][j];
				}
			}
		}
		cout << dp[m][n] << endl;
	}
}

