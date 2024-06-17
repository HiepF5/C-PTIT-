#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		priority_queue<int> pq;
		map<int, int> m;
		for(int i = 0; i < s.length(); i++){
			m[s[i]]++;
		}
		for(pair<int, int> x : m){
			pq.push(x.second);
		}
		while(k--){
			int tmp = pq.top();
			pq.pop();
			pq.push(tmp - 1);
		}
		long long ans = 0;
		while(!pq.empty()){
			ans += pq.top() * pq.top();
			pq.pop();
		}
		cout << ans << endl;
	}
}
