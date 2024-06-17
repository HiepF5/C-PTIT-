#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 1] = {0}, m = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[x] = a[x - 1] + 1;
		m = max(a[x], m);
	}
	cout << n - m;
}
