#include<bits/stdc++.h>

using namespace std;

string s;

int Try(long long n, long long pow){
	if(n <= s.length()){
		return n - 1;
	}
	if(n < pow / 2){
		return Try(n, pow / 2);
	}
	else{
		if(n > 1){
			return Try(n - 1 - pow / 2, pow / 2);
		}
		else{
			return Try(1, pow / 2);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		long long n;
		cin >> n;
		long long pow = s.length();
		while(pow < n){
			pow *= 2;
		}
		Try(n, pow);
		cout << s[Try(n, pow)] << endl;
	}
}
