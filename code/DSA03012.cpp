#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int t;cin>>t;
    while(t--)
    {
     string s;
     cin>>s;
     int n=s.size();
     map<char, int>m;
     for(auto i:s)m[i]++;
     int max1=0;
     for(auto i:m)if(max1<i.second)max1=i.second;
    // cout<<max1<<" "<<n/2+1;
     if(max1>n-max1+1)cout<<"-1";
     else cout<<"1";
     cout<<endl;
    }

}
