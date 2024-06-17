#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long ans = 0;
		for(int i = 0; i < s.length(); i++){
			string tmp = "";
			for(int j = i; j < s.length(); j++){
				tmp += s[j];
				ans += stoll(tmp);
			}
		}
		cout << ans << endl;
	}
}
