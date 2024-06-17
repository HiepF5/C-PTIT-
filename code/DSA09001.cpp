#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n,m;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>adj[1001];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<": ";
        for(auto j:adj[i])cout<<j<<" ";
        cout<<endl;
    }
    }

}
