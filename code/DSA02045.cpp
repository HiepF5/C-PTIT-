
#include<bits/stdc++.h>

using namespace std;

int n;
string s, x;

void Try(int i){
	for(int j = i; j < n; j++){
		x += s[j];
		cout << x << " ";
		Try(j + 1);
		x.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		sort(s.begin(), s.end());
		Try(0);
		cout << endl;
	}
}
