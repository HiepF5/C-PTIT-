#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dp[n + 1] = {0};
		int x, y, z;
		cin >> x >> z >> y;
		dp[1] = x; dp[0] = 0;
		for(int i = 2; i <= n; i++){
			if(i % 2 == 1){
				dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
			}
			else{
				dp[i] = min(dp[i - 1] + x, dp[i / 2] + y);
			}
		}
		cout << dp[n] << endl;
	}
}

