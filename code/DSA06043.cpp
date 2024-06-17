#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];long long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		sum -= a[0];
		long long tmp = a[0], ok = 1;
		for(int i = 1; i < n - 1; i++){
			if(tmp == sum - a[i]){
				cout << i + 1 << endl;
				ok = 0;
				break;
			}
			tmp += a[i];
			sum -= a[i];
		}
		if(ok) cout << -1 << endl;
	}
}

