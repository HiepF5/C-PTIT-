#include<bits/stdc++.h>

using namespace std;

long long merge(int a[], int l, int m, int r){
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	long long cnt = 0;
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i];
			i++; l++;
		}
		else{
			cnt += x.size() - i;
			a[l] = y[j];
			l++; j++;
		}
	}
	while(i < x.size()){
		a[l] = x[i];
		i++; l++;
	}
	while(j < y.size()){
		a[l] = y[j];
		j++; l++;
	}
	return cnt;
}

long long solve(int a[], int l, int r){
	if(l >= r) return 0;
	long long cnt = 0;
	int m = (l + r) / 2;
	cnt += solve(a, l, m);
	cnt += solve(a, m + 1, r);
	cnt += merge(a, l, m, r);
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << solve(a, 0, n - 1) << endl;
	}
}
