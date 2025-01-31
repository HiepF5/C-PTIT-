#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		a[0] = 1e9;
		stack<int> st;
		int b[n + 1];
		for(int i = n; i >= 0; i--){
			if(!st.empty()){
				while(!st.empty() && a[st.top()] < a[i]){
					b[st.top()] = i;
					st.pop();
				}
			}
			st.push(i);
		}
		while(!st.empty()){
			b[st.top()] = st.top();
			st.pop();
		}
		for(int i = 1; i <= n; i++){
			cout << i - b[i] << " ";
		}

		cout << endl;
	}
}
