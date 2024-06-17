#include<bits/stdc++.h>

using namespace std;

void rutGon(long long &a, long long &b){
	long long x = __gcd(a, b);
	a = a / x; b = b / x;
}

void sub(long long &a, long long &b, long long i){
	long long x = __gcd(i, b);
	long long m = i / x * b;
	a = a * m / b - m / i;
	b = m;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		for(long long i = 2; i <= b; i++){
			rutGon(a, b);
			if(a == 1){
				cout << 1 << "/" << b << endl;
				break;
			}
			else if(a * i > b){
				sub(a, b, i);
				cout << 1 << "/" << i << " + ";
			}
		}
	}
}
