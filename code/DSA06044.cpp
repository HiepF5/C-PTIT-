#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a, b;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(i % 2 == 0) a.push_back(x);
		else b.push_back(x);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	int i = 0;
	while(i < a.size() && i < b.size()){
		cout << a[i] << " " << b[i] << " ";
		i++;
	}
	if(i < a.size()) cout << a[i] << " ";
}
