
#include<bits/stdc++.h>

using namespace std;

int solve(string s, int x, int y,int cnt){
	while(x >= 0 && y < s.length()){
		if(s[x] != s[y]){
			break;
		}
		cnt += 2;
		x--; y++;
	}
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0;
		for(int i = 1; i < s.length() - 1; i++){
			ans = max(ans, solve(s, i - 1, i + 1, 1));
		}
		for(int i = 0; i < s.length() - 1; i++){
			ans = max(ans, solve(s, i, i + 1, 0));
		}
		cout << ans << endl;
	}
}
