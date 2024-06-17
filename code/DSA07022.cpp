#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> m;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		stack<pair<int, int>> st;
		int b[n];
		for(int i = 0; i < n; i++){
			b[i] = -1;
			if(st.empty()){
				st.push({i, m[a[i]]});
			}
			else{
				while(!st.empty() && m[a[i]] > st.top().second){
					b[st.top().first] = a[i];
					st.pop();
				}
				st.push({i, m[a[i]]});
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
