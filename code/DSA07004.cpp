#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int ans = 0;
		for(int i = 0; i < s.length(); i++){
			if(st.empty() || s[i] == '('){
				if(s[i] == ')'){
					ans++;
				}
				st.push('(');
			}
			else if(s[i] == ')'){
				st.pop();
			}
		}
		if(!st.empty()){
			ans += st.size() / 2;
		}
		cout << ans << endl;
	}
}
