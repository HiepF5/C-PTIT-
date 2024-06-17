#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) b[i] = c[i] = -1;
		stack<int> st;
		vector<int> v;
		for(int i = 0; i < n; i++){
			while(!st.empty() && a[st.top()] < a[i]){
				b[st.top()] = i;
				v.push_back(st.top());
				st.pop();
			}
			for(int j = 0; j < v.size(); j++){
				if(a[b[v[j]]] > a[i]){
					c[v[j]] = a[i];
					v.erase(v.begin() + j);
					j--;
				}
			}
			st.push(i);
		}
		for(int i = 0; i < n; i++) cout << c[i] << " ";
		cout << endl;
		//for(int i = 0; i < n; i++) cout << b[i] << " ";
	}
}
