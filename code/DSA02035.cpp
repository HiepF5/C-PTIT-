#include<bits/stdc++.h>

using namespace std;

int a[10], n, k, ans;
string x[10];
bool used[10];

int diff(){
	int max_val = -1, min_val = 1e9;
	for(int i = 0; i < n; i++){
		int tmp = 0;
		for(int j = 0; j < k; j++){
			tmp = tmp * 10 + (x[i][a[j]] - '0');
		}
		max_val = max(max_val, tmp);
		min_val = min(min_val, tmp);
	}
	return max_val - min_val;
}

void Try(int i){
	for(int j = 0; j < k; j++){
		if(used[j] == false){
			a[i] = j;
			used[j] = true;
			if(i == k - 1){
				ans = min(ans, diff());
			}
			else{
				Try(i + 1);
			}
			used[j] = false;
		}
	}
}

int main(){
	ans = 1e9;
	memset(used, false, sizeof(used));
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	Try(0);
	cout << ans;
}
