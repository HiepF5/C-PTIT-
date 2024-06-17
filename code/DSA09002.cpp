#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<int>v[1001];
main()
{
    int n;
    cin>>n;
    int j;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        istringstream ss(s);
        while(ss>>j)if(i<j)cout<<i<<" "<<j<<endl;
    }
    //for(int i=1;i<=n;i++)
    //{
    //    for(auto i:v[i])cout<<i
    //}


}
