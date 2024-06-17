
#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		}
		else if(s[i] == ')'){
			if(!st.empty()){
				int top = st.top();
				st.pop();
				if(top == 0 || s[top - 1] == '+'){
					continue;
				}
				else if(s[top - 1] == '-'){
					for(int j = top; j <= i; j++){
						if(s[j] == '+') s[j] = '-';
						else if(s[j] == '-') s[j] = '+';
					}
				}
			}
		}
	}
	string res = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] != '(' && s[i] != ')'){
			res += s[i];
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		string s1 = solve(a);
		string s2 = solve(b);
		if(s1 == s2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
