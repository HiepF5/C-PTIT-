#include<bits/stdc++.h>

using namespace std;

int maxCrossArrSum(int a[], int l, int m, int r){
	int leftSum = -1e9, rightSum = -1e9, sum = 0;
	for(int i = m; i >= l; i--){
		sum += a[i];
		if(leftSum < sum){
			leftSum = sum;
		}
	}
	sum = 0;
	for(int i = m + 1; i <= r; i++){
		sum += a[i];
		if(rightSum < sum){
			rightSum = sum;
		}
	}
	return leftSum + rightSum;
}

int maxSubArrSum(int a[], int l, int r){
	if(l > r) return -1e9;
	if(l == r) return a[l];
	int m = (l + r) / 2;
	int leftSum = maxSubArrSum(a, l, m);
	int rightSum = maxSubArrSum(a, m + 1, r);
	int crossSum = maxCrossArrSum(a, l, m, r);
	return max(max(leftSum, rightSum), crossSum);
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
		cout << maxSubArrSum(a, 0, n - 1) << endl;
	}
}
