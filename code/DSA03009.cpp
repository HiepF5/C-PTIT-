#include<bits/stdc++.h>

using namespace std;

struct career{
	int id, dl, pf;
};

bool cmp(career a, career b){
	if(a.pf != b.pf){
		return a.pf > b.pf;
	}
	return a.dl < b.dl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		career a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].id >> a[i].dl >> a[i].pf;
		}
		sort(a, a + n, cmp);
		int cnt = 0, sumpf = 0, check[1005] = {0};
		for(int i = 0; i < n; i++){
			for(int j = a[i].dl - 1; j >= 0; j--){
				if(check[j] == 0){
					check[j] = 1;
					cnt++;
					sumpf += a[i].pf;
					break;
				}
			}
		}
		cout << cnt << " " << sumpf << endl;
	}
}
