#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int xoa = 0, ans = 0;
		for(int i = 0; i < s.length(); i++){
			if(st.empty()){
				st.push(s[i]);
			}
			else if(st.top() == '[' && s[i] == ']'){
				xoa += 2;
				st.pop();
			}
			else if(st.top() == ']' && s[i] == '['){ // chi con dau ]
				ans += st.size() + xoa;
				st.pop();
			}
			else{
				st.push(s[i]);
			}
			if(st.empty()){
				xoa = 0;
			}
		}
		cout << ans << endl;
	}
}
