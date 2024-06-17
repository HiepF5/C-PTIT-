#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	stack<int> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '{' || s[i] == '[' || s[i] == '(') st.push(i);
			else{
				if(st.empty()){
					return false;
				}
				else{
					int idx = st.top();
					if(s[i] == '}' && s[idx] != '{'){
						return false;
					}
					else if(s[i] == ']' && s[idx] != '['){
						return false;
					}
					else if(s[i] == ')' && s[idx] != '('){
						return false;
					}
					st.pop();
				}
			}
		}
	if(!st.empty()) return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
