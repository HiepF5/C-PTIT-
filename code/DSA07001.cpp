#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	vector<int> v;
	while(cin >> s){
		if(s == "push"){
			int a;
			cin >> a;
			v.push_back(a);
		}
		else if(s == "pop"){
			v.pop_back();
		}
		else{
			if(v.size() == 0) cout << "empty";
			else{
				for(int x : v) cout << x << " ";
			}
			cout << endl;
		}
	}
}
