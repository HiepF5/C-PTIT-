
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		string ans = "";
		for(int i = 0; i < s.length(); i++){
			if(s[i] != ')'){
				st.push(string(1, s[i]));
			}
			else{
				string p1 = "", p2 = "";
				while(!st.empty() && st.top() != "("){
					if(st.top() == "+"){
						p1 = '-' + p1;
					}
					else if(st.top() == "-"){
						p1 = '+' + p1;
					}
					else{
						p1 = st.top() + p1;
					}
					p2 = st.top() + p2;
					st.pop();
				}
				st.pop();
				if(!st.empty() && st.top() == "-"){
					for(int j = 0; j < p1.length(); j++){
						st.push(string(1, p1[j]));
					}
				}
				else{
					for(int j = 0; j < p2.length(); j++){
						st.push(string(1, p2[j]));
					}
				}
			}
		}
		while(!st.empty()){
			ans = st.top() + ans;
			st.pop();
		}
		cout << ans << endl;
	}
}
