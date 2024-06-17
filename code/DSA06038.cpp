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

long long mergeSort(int a[], int l, int r){
	if(l >= r){
		return 0;
	}
	int m = (l + r) / 2;
	long long cnt = 0;
	cnt += mergeSort(a, l, m);
	cnt += mergeSort(a, m + 1, r);
	cnt += merge(a, l, m, r);
	return cnt;
}

int main(){
	int n;
	cin >> n;
	int a[n + 1], b[n + 1], k = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % 2 == 0){
			b[k] = a[i];
			k++;
		}
	}
	long long cnt = mergeSort(b, 0, k - 1);
	int tmp = 0;
	a[n] = 1;
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 == 0 && a[i - 1] % 2 == 0){
			tmp++;
		}
		else if(a[i] % 2 == 1 && a[i - 1] % 2 == 0){
			cnt -= mergeSort(a, i - tmp - 1, i - 1);
			tmp = 0;
		}
	}
	cout << cnt;
}
