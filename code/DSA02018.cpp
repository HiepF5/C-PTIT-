#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> toan_hang, toan_tu;
int a[6], b[5], x[6];
bool used[6], ok = true;

void next(){
	int i = 4;
	while(i >= 1 && b[i] == 3){
		i--;
	}
	if(i == 0){
		ok = false;
	}
	else{
		b[i]++;
		for(int j = i + 1; j <= 4; j++){
			b[j] = 1;
		}
	}
}

void init1(){
	for(int i = 1; i <= 4; i++){
		b[i] = 1;
	}
	while(ok){
		vector<int> tmp(b + 1, b + 5);
		toan_tu.push_back(tmp);
		next();
	}
}

void init2(int i){
	for(int j = 1; j <= 5; j++){
		if(used[j] == false){
			x[i] = j;
			used[j] = true;
			if(i == 5){
				vector<int> tmp(x + 1, x + 6);
				toan_hang.push_back(tmp);
			}
			else{
				init2(i + 1);
			}
			used[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	init1();
	init2(1);
	while(t--){
		for(int i = 1; i <= 5; i++){
			cin >> a[i];
		}
		bool check = false;
		for(int i = 0; i < toan_hang.size(); i++){
			for(int j = 0; j < toan_tu.size(); j++){
				int res = a[toan_hang[i][0]];
				for(int k = 0; k < 4; k++){
					if(toan_tu[j][k] == 1){
						res += a[toan_hang[i][k + 1]];
					}
					else if(toan_tu[j][k] == 2){
						res -= a[toan_hang[i][k + 1]];
					}
					else{
						res *= a[toan_hang[i][k + 1]];
					}
				}
				if(res == 23){
					check = true;
					break;
				}
			}
			if(check){
				break;
			}
		}
		if(check){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
