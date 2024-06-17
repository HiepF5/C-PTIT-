#include<bits/stdc++.h>

using namespace std;

int n, a[30], x[30];
vector<vector<int>> ans;

bool check(int c){
	for(int i = 2; i <= sqrt(c); i++){
		if(c % i == 0){
			return false;
		}
	}
	return c > 1;
}

void Try(int i, int sum, int pos){
	for(int j = pos; j < n; j++){
		x[i] = a[j];
		if(check(sum + x[i])){
			vector<int> tmp(x, x + i + 1);
			ans.push_back(tmp);
		}
		Try(i + 1, sum + x[i], j + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		Try(0, 0, 0);
		sort(ans.begin(), ans.end());
		for(int i = 0; i < ans.size(); i++){
			for(int x : ans[i]){
				cout << x << " ";
			}
			cout << endl;
		}
		ans.clear();
	}
}
