
#include<bits/stdc++.h>

using namespace std;

vector<string> v;
set<string> se;

void solve(string s){
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		}
		else if(s[i] == ')'){
			string tmp = "";
			for(int j = 0; j < s.length(); j++){
				if(j != i && j != st.top()){
					tmp += s[j];
				}
			}
			if(se.find(tmp) == se.end()){
				v.push_back(tmp);
				se.insert(tmp);
			}
			st.pop();
		}
	}
}

int main(){
	string s;
	cin >> s;
	v.push_back(s);
	for(int i = 0; i < v.size(); i++){
		solve(v[i]);
	}
	for(string x : se){
		cout << x << endl;
	}
}
