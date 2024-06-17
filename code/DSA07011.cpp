#include<bits/stdc++.h>

using namespace std;

void solve(string s){
	stack<string> st;
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string op1 = st.top();
			st.pop();
			string op2 = st.top();
			st.pop();
			string res = s[i] + op2 + op1;
			st.push(res);
		}
	}
	cout << st.top() << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		solve(s);
	}
}

