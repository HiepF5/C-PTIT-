#include<bits/stdc++.h>

using namespace std;

int solve(int n, long long k){
	if(k == pow(2, n - 1)){
		return n;
	}
	else if(k > pow(2, n - 1)){
		return solve(n - 1, k - pow(2, n - 1));
	}
	else{
		return solve(n - 1, k);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long k;
		cin >> k;
		cout << solve(n, k) << endl;
	}
}

