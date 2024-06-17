#include<bits/stdc++.h>

using namespace std;

int a[10];
vector<string> v;

void Try(int i){
	if(i == 9){
		if(a[1] == 0 && a[2] == 0) return;
		if(a[3] == 0 && a[4] == 0 || a[3] != 0) return;
		if(a[5] == 0) return;
//		for(int j = 1; j <= 4; j++){
//			if(a[j] != a[8-j+1]) return;
//		}
		string s = "";
		for(int j = 1; j <= 8; j++){
			s += (char)(a[j] + '0');
			if(j == 2 || j == 4) s += '/';
		}
		v.push_back(s);
		return;
	}
	for(int j = 0; j <= 2; j+=2){
		a[i] = j;
//		for(int k = 1; k <= i; k++) cout << a[k];
//		cout << endl;
		Try(i + 1);
	}
}

int main(){
	Try(1);
	sort(v.begin(), v.end());
	for(string s : v) cout << s << endl;
}
