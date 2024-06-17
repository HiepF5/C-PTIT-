#include<bits/stdc++.h>

using namespace std;

int n, a[20][20], cmin = 1e9, xopt[20], fopt, sum;
bool used[20];

void Try(int i){
	for(int j = 2; j <= n; j++){
		if(used[j] == false){
			used[j] = true;
			xopt[i] = j;
			sum += a[xopt[i - 1]][j];
			if(i == n){
				fopt = min(fopt, sum + a[j][1]);
			}
			else if(sum + cmin * (n - i + 1) < fopt){
				Try(i + 1);
			}
			sum -= a[xopt[i - 1]][j];
			used[j] = false;
		}
	}
}

int main(){
	memset(used, false, sizeof(used));
	fopt = 1e9; xopt[1] = 1; sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			cmin = min(cmin, a[i][j]);
		}
	}
	Try(2);
	cout << fopt;
}
