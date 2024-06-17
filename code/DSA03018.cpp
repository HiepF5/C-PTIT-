#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int so7 = 0, so4 = 0;
		while(n > 0 && n % 7 != 0){
			so4++;
			n -= 4;
		}
		if(n < 0){
			cout << -1 << endl;
		}
		else{
			so7 = n / 7;
			for(int i = 1; i <= so4; i++){
				cout << 4;
			}
			for(int i = 1; i <= so7; i++){
				cout << 7;
			}
			cout << endl;
		}
	}
}
