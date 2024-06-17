#include<bits/stdc++.h>

using namespace std;

int idx(int a[], int l, int r, int x){
	int pos = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			return m;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return pos;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		int pos = idx(a, 0, n - 1, x);
		if(pos == -1){
			cout << "NO" << endl;
		}
		else {
			cout << pos + 1 << endl;
		}
	}
}

