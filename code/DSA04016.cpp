#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				k -= 2;
				if(k <= 0){
					cout << a[i] << endl;
					break;
				}
				i++; j++;
			}
			else if(a[i] < b[j]){
				k--;
				if(k <= 0){
					cout << a[i] << endl;
					break;
				}
				i++;
			}
			else{
				k--;
				if(k <= 0){
					cout << b[j] << endl;
					break;
				}
				j++;
			}
		}
		if(k > 0){
			while(i < n){
				k--;
				if(k == 0){
					cout << a[i] << endl;
					break;
				}
				i++;
			}
			while(j < m){
				k--;
				if(k == 0){
					cout << b[j] << endl;
					break;
				}
				j++;
			}
		}
	}
}
