#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int ans = 0, cnt = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '('){
				st.push(s[i]);
			}
			else if(!st.empty() && s[i] == ')'){
				ans += 2;
				st.pop();
			}
		}
		cout << ans << endl;
	}
}
