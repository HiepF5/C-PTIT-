#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int d;
		cin >> d;
		string s;
		cin >> s;
		map<int, int> m;
		int c[26] = {0};
		for(int i = 0; i < s.length(); i++){
			m[s[i]]++;
		}
		int k = 0;
		for(pair<int, int> x : m){
			c[k] = x.second;
			k++;
		}
		sort(c, c + k, cmp);
		int check = 1, i = 0;
		while(i < k){
			for(int x = i; x < c[i]; x++){
				if(i + x * d >= s.length()){
					check = 0;
					break;
				}
			}
			i++;
		}
		if(check){
			cout << 1 << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}
