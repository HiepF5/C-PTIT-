#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int check = 0;
		for(int i = 0; i < n - 2; i++){
			if(a[i] > k){
				break;
			}
			int l = i + 1, r = n - 1;
			while(l < r){
				if(1ll*a[i] + a[l] + a[r] == k){
					check = 1;
					cout << "YES" << endl;
					break;
				}
				else if(a[i] + a[l] + a[r] < k) l++;
				else r--;
			}
			if(check) break;
		}
		if(check == 0) cout << "NO" << endl;
	}
}
