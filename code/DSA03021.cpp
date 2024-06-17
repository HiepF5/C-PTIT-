#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], m = 1e9;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x[2001] = {0}, num = 0;
	for(int i = 0; i < n; i++){
		int tmp[2001] = {0};
		for(int j = 1; j <= a[i]; j++){
			if(tmp[a[i] / j] == 0){
				x[a[i] / j]++;
			}
			tmp[a[i] / j] = 1;
		}
	}
	for(int i = 1; i <= 2000; i++){
		if(x[i] == n){
			num = i;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += a[i] / (num + 1) + 1;
	}
	cout << ans;
}
