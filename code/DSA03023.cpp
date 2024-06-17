#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> a;
	for(int i = 0; i < n; i++){
		if(s[i] == 'X'){
			a.push_back(0);
		}
		else if(s[i] == 'T'){
			a.push_back(1);
		}
		else{
			a.push_back(2);
		}
	}
		vector<int> b = a;
		sort(b.begin(), b.end());
		for(int i = 0; i < a.size(); i++){
			if(a[i] == b[i]){
				a.erase(a.begin() + i);
				b.erase(b.begin() + i);
				i--;
			}
		}
		int cnt = 0;
		for(int i = 0; i < a.size(); i++){
			if(a[i] != b[i]){
				if(a[i] == 1){
					for(int j = i + 1; j < a.size(); j++){
						if(a[j] == b[i]){
							swap(a[i], a[j]);
							cnt++;
							break;
						}
					}
				}
				else{
					for(int j = a.size() - 1; j > i; j--){
						if(a[j] == b[i]){
							swap(a[j], a[i]);
							cnt++;
							break;
						}
					}
				}
			}
		}
	cout << cnt;
}
