#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v[1001];
        int n,m;cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<": ";
            for(auto j:v[i])cout<<j<<" ";
            cout<<endl;
        }
       // memset(chuaxet,true,sizeof(chuaxet));
    }

}
