#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack<int> st;
		for(int i = 0; i < n; i++){
			while(!st.empty() && a[st.top()] < a[i]){
				a[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty()){
			a[st.top()] = -1;
			st.pop();
		}
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
