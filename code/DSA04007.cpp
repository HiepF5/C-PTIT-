#include<bits/stdc++.h>
using namespace std;
void dao(string &s){
	string m="";
	for(int i = s.size()-1; i>=0;i--){
		m+=s[i];
	}
	s = m;
}
main(){
	int a;
	cin >> a;
	while(a--){
		string x,s;
		int n,k,m;
		cin >> k >> x >> s;
		string ss="";
		while(x.size()<s.size()){
			x="0"+x;
		}
		while(x.size()>s.size()){
			s="0"+s;
		}
		int j = 0;
		for(int i = x.size()-1; i>=0;i--){
			if((x[i]-'0')+(s[i]-'0')+j<k){
				ss+=to_string((x[i]-'0')+(s[i]-'0')+j);
				j = 0;
			}
			else{
				ss+=to_string((x[i]-'0')+(s[i]-'0')+j-k);
				j = 1;
			}
		}
		dao(ss);
		if(j==1) ss="1"+ss;
		cout << ss <<endl;
	}
}
