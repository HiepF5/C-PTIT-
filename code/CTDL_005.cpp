#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<string>s;
    for(int i=1;i<=n;i++)
    {
        string k;cin>>k;
        s.push_back(k);
    }
    string x;cin>>x;
    for(auto i:s)if(x!=i)cout<<i<<" ";

}
