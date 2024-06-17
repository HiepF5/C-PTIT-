#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = s.length() - 1; i >= 0; i--){
			if(isalpha(s[i])){
				st.push(string(1, s[i]));
			}
			else{
				string operand1 = st.top();
				st.pop();
				string operand2 = st.top();
				st.pop();
				string operand = "(" + operand1 + string(1, s[i]) + operand2 + ")";
				st.push(operand);
			}
		}
		cout << st.top() << endl;
	}
}
