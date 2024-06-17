#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
			c[i] = a[i];
		}
		b[0] = a[0];
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[i] > a[j]){
					b[i] = max(b[j] + a[i], b[i]);
				}
			}
		}
		for(int i = n - 2; i >= 0; i--){
			for(int j = n - 1; j > i; j--){
				if(a[i] > a[j]){
					c[i] = max(a[i] + c[j], c[i]);
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = max(ans, c[i] + b[i] - a[i]);
		}
		cout << ans << endl;
	}
}
