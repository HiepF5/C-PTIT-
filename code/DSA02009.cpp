#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], res, ok;
bool used[100];

void Try(int sum, int cnt){
	if(cnt == k){
		ok = 1;
		return;
	}
	if(ok) return;
	for(int i = 0; i < n; i++){
		if(used[i] == false){
			used[i] = true;
			if(sum + a[i]== res){
				Try(0, cnt + 1);
			}
			else if(sum + a[i] < res){
				Try(sum + a[i], cnt);
			}

		}
		used[i] = false;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		res = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			res += a[i];
		}
		if(res % k != 0){
			cout << 0 << endl;
			continue;
		}
		memset(used, false, sizeof(used));
		res /= k;
		ok = 0;
		Try(0, 0);
		cout << ok << endl;
	}
}
