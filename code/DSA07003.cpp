#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack<char> st;
		bool ans = false;
		for(int i = 0; i < s.length(); i++){
			bool ok = true;
			if(s[i] == ')'){
				char top = st.top();
				st.pop();
				while(top != '('){
					if(top == '+' || top == '-' || top == '*' || top == '/'){
						ok = false;
					}
					top = st.top();
					st.pop();
				}
				if(ok == true){
					ans = true;
				}
			}
			else{
				st.push(s[i]);
			}
		}
		if(ans){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
}

