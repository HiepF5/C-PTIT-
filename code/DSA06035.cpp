#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], x[n], y[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			x[i] = y[i] = 1;
		}
		for(int i = 1; i < n; i++){
			if(a[i-1] < a[i]) x[i] += x[i-1];
		}
		for(int i = n - 2; i >= 0; i--){
			if(a[i+1] < a[i]) y[i] += y[i+1];
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = max(ans, x[i] + y[i] - 1);
		}
		cout << ans << endl;
	}
}
