#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];

void DFS(int u,vector<int>v[])
{
    stack<int>s;
    cout<<u<<" ";
    chuaxet[u]=false;
    s.push(u);
    while(!s.empty())
    {
        int t=s.top();s.pop();
        for(auto i:v[t])
        {
            if(chuaxet[i])
            {
                cout<<i<<" ";
                s.push(t);s.push(i);chuaxet[i]=false;break;
            }
        }
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v[1001];
        int n,m,u;cin>>n>>m>>u;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        //for(int i=1;i<=n;i++)
       // {
        //    cout<<i<<": ";
        //    for(auto j:v[i])cout<<j<<" ";
        //    cout<<endl;
        //}
        memset(chuaxet,true,sizeof(chuaxet));
        DFS(u,v);
        //for(auto i:v)i.clear();
        cout<<endl;
    }
}

