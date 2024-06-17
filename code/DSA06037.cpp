#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int cnt = 0;
		int Max[n], Min[n];
		Max[0] = a[0];
		for(int i = 1; i < n; i++){
			Max[i] = max(a[i], Max[i-1]);
		}
		Min[n-1] = a[n-1];
		for(int i = n - 2; i >= 0; i--){
			Min[i] = min(a[i], Min[i+1]);
		}
		int ans[n];
		for(int i = 0; i <= n-2; i++){
			if(Max[i] <= Min[i+1]){
				ans[cnt++] = i;
			}
		}
		cout << cnt << endl;
			for(int i = 0; i < cnt; i++) cout << ans[i] + 1 << " ";

		cout << endl;
	}
}
