
#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	if(s[0] == '0'){
		return false;
	}
	for(int i = 1; i < s.length(); i++){
		if(s[i - 1] > '2' && s[i] == '0'){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(!check(s)){
			cout << 0 << endl;
		}
		else{
			int dp[100] = {0};
			dp[0] = 1;
			dp[1] = 1;
			int n = s.length();
			for(int i = 2; i <= s.length(); i++){
				if(s[i - 1] > '0'){
					dp[i] = dp[i - 1];
				}
				if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7')){
					dp[i] += dp[i - 2];
				}
			}
			cout << dp[n] << endl;
		}
	}
}
