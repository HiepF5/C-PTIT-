#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	stack<int> st;
	while(n--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int a;
			cin >> a;
			st.push(a);
		}
		else if(s == "PRINT"){
			if(st.empty())
				cout << "NONE";
			else
				cout << st.top();
			cout << endl;
		}
		else{
			if(!st.empty()) st.pop();
		}
	}
}
