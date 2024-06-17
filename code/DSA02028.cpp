#include<bits/stdc++.h>

using namespace std;

int n, k, a[20], sum, ans;

void Try(int i, int res, int cnt){
	if(cnt == k){
		if(i == n){
			ans++;
		}
		return;
	}
	if(cnt > k) return;
	for(int j = i; j < n; j++){
		if(res + a[j] == sum){
			Try(j + 1, 0, cnt + 1);
		}
		Try(j + 1, res + a[j], cnt);
		break;
	}
}

int main(){
	sum = 0; ans = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % k != 0){
		cout << 0;
	}
	else{
		sum /= k;
		Try(0, 0, 0);
		cout << ans;
	}
}
