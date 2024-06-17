#include<bits/stdc++.h>

using namespace std;

int ans, n, s, t[50];

void Try(int i, int sum, int cnt){
	if(sum == s){
		ans = min(ans, cnt);
		return;
	}
	for(int j = i; j < n; j++){
		if(t[j] + sum <= s){
			Try(j + 1, sum + t[j], cnt + 1);
		}
	}
}

int main(){
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		cin >> t[i];
	}
	sort(t, t + n, greater<int>());
	ans = 1e9 + 7;
	Try(0, 0, 0);
	if(ans != 1e9 + 7){
		cout << ans;
	}
	else{
		cout << -1;
	}
}
