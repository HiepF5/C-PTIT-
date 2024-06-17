#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<long long, int> a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a + n);
		int res = 0;
		for(int i = 0; i < n; i++){
			if(a[i].second == 0) {
				res = i;
				break;
			}
		}
		if(res == 0) cout << 0 << endl;
		else cout << n - res << endl;
	}
}
