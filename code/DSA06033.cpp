#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first) return a.first < b.first;
	else return a.second > b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<int, int> p[n];
		for(int i = 0; i < n; i++){
			cin >> p[i].first;
			p[i].second = i;
		}
		sort(p, p + n, cmp);
//		for(int i = 0; i < n; i++){
//			cout << p[i].first << " ";
//		}cout << endl;
//		for(int i = 0; i < n; i++){
//			cout << p[i].second << " ";
//		}
		int i = 0, j = 1, ans = -1;
		while(j < n){
			if(p[j].second - p[i].second < 0 && j - i == 1){
				i++; j++;
			}
			else if(p[j].second - p[i].second < 0) i++;
			else{
				while(p[j].second - p[i].second > 0 && j < n){
					ans = max(ans, p[j].second - p[i].second);
					j++;
				}
			}
		}
		cout << ans << endl;
	}
}
