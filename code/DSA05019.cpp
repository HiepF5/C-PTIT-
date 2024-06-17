#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m + 1][n + 1], dp[m + 1][n + 1] = {0};
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
				if(a[i][j]){
					dp[i][j] = 1;
				}
			}
		}
		for(int i = 0; i <= m; i++){
			a[i][0] = 0;
		}
		for(int i = 0; i <= n; i++){
			a[0][i] = 0;
		}
		int ans = 0;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				if(a[i][j] && a[i][j] && a[i - 1][j - 1] && a[i - 1][j] && a[i][j - 1]){
					dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
				}
				ans = max(ans, dp[i][j]);
			}
		}
		cout << ans << endl;
	}
}

