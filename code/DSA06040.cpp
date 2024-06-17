#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m ,k;
		cin >> m >> n >> k;
		long long a[m], b[n], c[k];
		for(long long &x : a) cin >> x;
		for(long long &x : b) cin >> x;
		for(long long &x : c) cin >> x;
		int i = 0, j = 0, l = 0, check = 1;
		while(i < m && j < n && l < k){
			if(a[i] == b[j] && a[i] == c[l]){
				cout << a[i] << " ";
				check = 0;
				i++; j++; l++;
			}
			else if(a[i] < b[j] ) i++;
			else if(b[j] < c[l]) j++;
			else l++;
		}
		if(check) cout << -1;
		cout << endl;
	}
}
