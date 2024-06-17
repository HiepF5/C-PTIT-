#include<bits/stdc++.h>

using namespace std;

long long fb[100] = {0};
void init(){
	fb[0] = 0; fb[1] = 1; fb[2] = 1;
	for(int i = 3; i <= 92; i++){
		fb[i] = fb[i - 1] + fb[i - 2];
	}
}

int solve(int n, long long k){
	if(n <= 2){
		return n;
	}
	else if(k > fb[n - 2]){
		return solve(n - 1, k - fb[n - 2]);
	}
	else{
		return solve(n - 2, k);
	}

}

int main(){
	int t;
	cin >> t;
	init();
	while(t--){
		int n;
		cin >> n;
		long long k;
		cin >> k;
		int res = solve(n, k);
		if(res % 2 == 1){
			cout << 0 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
}
