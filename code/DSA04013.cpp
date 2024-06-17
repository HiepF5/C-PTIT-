#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int i = 0, j = n / 2;
		int cnt = 0;
		while(j < n){
			if(a[j] >= 2 * a[i]){
				cnt++;
				i++; j++;
			}
			else{
				cnt++;
				j++;
			}
		}
		while(i < n / 2){
			cnt++;
			i++;
		}
		cout << cnt << endl;
	}
}
