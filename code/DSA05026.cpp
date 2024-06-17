#include<bits/stdc++.h>

using namespace std;

int x[101][25001];

int qhd(int a[], int n, int c){
	for(int i = 0; i <= c; i++){
		x[0][i] = 0;
	}
	for(int i = 0; i <= n; i++){
		x[i][0] = 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= c; j++){
			if(a[i] <= j){
				x[i][j] = max(x[i - 1][j - a[i]] + a[i], x[i - 1][j]);
			}
			else{
				x[i][j] = x[i - 1][j];
			}
		}
	}
	return x[n][c];
}

int main(){
	int c, n;
	cin >> c >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cout << qhd(a, n, c);
}
