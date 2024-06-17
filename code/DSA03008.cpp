#include<bits/stdc++.h>

using namespace std;

struct career{
	int s, t;
};

bool cmp(career a, career b){
	return a.t < b.t;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		career a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].s;
		}
		for(int i = 0; i < n; i++){
			cin >> a[i].t;
		}
		sort(a, a + n, cmp);
		int cnt = 1, tmp = a[0].t;
		for(int i = 1; i < n; i++){
			if(tmp <= a[i].s){
				cnt++;
				tmp = a[i].t;
			}
		}
		cout << cnt << endl;
	}
}
