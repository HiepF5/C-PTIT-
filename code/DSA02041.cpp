#include<bits/stdc++.h>

using namespace std;

int n, ans;

void Try(int res, int cnt){
	if(res == 1){
		ans = min(ans, cnt);
		return;
	}
	if(res == 0) return;
	if(res % 3 == 0){
		Try(res / 3, cnt + 1);
	}
	else if((res - 1) % 3  == 0){
		Try((res - 1) / 3, cnt + 2);
	}
	else{
		Try((res - 2) / 3, cnt + 3);
	}
	if(res % 2 == 0){
		Try(res / 2, cnt + 1);
	}
	else{
		Try((res - 1) / 2, cnt + 2);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans = 1e9;
		Try(n, 0);
		cout << ans << endl;
	}
}
