#include<bits/stdc++.h>

using namespace std;

void Try(int n, char x, char y, char z){
	if(n == 1) cout << x << " -> " << z << endl;
	else{
		Try(n - 1, x, z, y);
		Try(1, x, y, z);
		Try(n - 1, y, x, z);
	}
}

int main(){
	int n;
	cin >> n;
	Try(n, 'A', 'B', 'C');
}
