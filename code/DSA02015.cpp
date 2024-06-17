#include<bits/stdc++.h>

using namespace std;

vector<string> ans;
int tmp;

bool check(string x){
	if(x.length() < 2){
		return false;
	}
	int cnt = 0;
	for(int i = 0; i < x.length(); i++){
		if(x[i] == '('){
			cnt++;
		}
		else if(x[i] == ')'){
			cnt--;
		}
		if(cnt < 0) return false;
	}
	return cnt == 0;
}

void Try(int i, string x){
	if(tmp <= x.length() && check(x)){
		if(tmp == x.length()){
			ans.push_back(x);
		}
		else{
			tmp = x.length();
			ans.clear();
			ans.push_back(x);
		}
		return;
	}
	for(int j = i + 1; j < x.length(); j++){
		if(x[j] == '(' || x[j] == ')'){
			string a = x;
			a.erase(a.begin() + j);
			Try(j - 1, a);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		tmp = 0;
		Try(-1, s);
		if(ans.size() == 0){
			cout << -1 << endl;
		}
		else{
			set<string> se;
			for(int i = 0; i < ans.size(); i++){
				se.insert(ans[i]);
			}
			for(string x : se){
				cout << x << " ";
			}
			cout << endl;

		}
		ans.clear();
	}
}
