#include<bits/stdc++.h>

using namespace std;

int floor(long long a[], int n, long long x){
	int pos = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] <= x){
			pos = m;
			l = m + 1;
		}
		else{
			r = m -1;
		}
	}
	return pos;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], x;
		cin >> x;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int pos = floor(a, n, x);
		if(pos == -1){
			cout << -1;
		}
		else{
			cout << pos + 1;
		}
		cout << endl;
	}
}
