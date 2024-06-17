#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], x[100];

void Try(int i, int pos){
	if(i == k + 1){
		for(int j = 1; j <= k; j++){
			cout << x[j] << " ";
		}
		cout << endl;
		return;
	}
	for(int j = pos; j < n; j++){
		if(a[j] > x[i-1]){
			x[i] = a[j];
			Try(i + 1, j + 1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		x[0] = -1;
		Try(1, 0);
	}
}
