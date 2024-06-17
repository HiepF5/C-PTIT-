#include<bits/stdc++.h>

using namespace std;

long long convert(string s){
	long long base = 1, res = 0;
	for(int i = s.length() - 1; i >= 0; i--){
		res += (int)(s[i] - '0') * base;
		base *= 2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		long long x = convert(a);
		long long y = convert(b);
		cout << x * y << endl;
	}
}
