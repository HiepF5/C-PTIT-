#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		stack<int> st;
		int i = 0;
		while(i < n){
			if(st.empty() || a[i] >= a[st.top()]){
				st.push(i);
				i++;
			}
			else{
				int idx = st.top();
				st.pop();
				long long tmp;
				if(!st.empty()){
					tmp = 1ll * a[idx] * (i - st.top() - 1);
				}
				else{
					tmp = 1ll *a[idx] *  i;
				}
				ans = max(ans, tmp);
			}
		}
		while(!st.empty()){
			int idx = st.top();
			st.pop();
			long long tmp;
			if(!st.empty()){
				tmp = 1ll *a[idx] * (i - st.top() - 1);
			}
			else{
				tmp = 1ll *a[idx] * i;
			}
			ans = max(ans, tmp);
		}
		cout << ans << endl;
	}
}
