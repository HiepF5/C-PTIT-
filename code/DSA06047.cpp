#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			a[i] = 1ll * x * x;
		}
		sort(a, a + n);
		int check = 1;
		for(int i = n - 1; i >= 0; i--){
			int l = 0, r = i - 1;
			while(l < r){
				if(a[i] == a[l] + a[r]){
					check = 0;
					cout << "YES" << endl;
					break;
				}
				else if(a[i] < a[l] + a[r]) r--;
				else l++;
			}
			if(check == 0) break;
		}
		if(check) cout << "NO" << endl;
	}
}
