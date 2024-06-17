
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];

void DFS(int u,vector<int>v[])
{
    stack<int>s;
    //cout<<u<<" ";
    chuaxet[u]=false;
    s.push(u);
    while(!s.empty())
    {
        int t=s.top();s.pop();
        for(auto i:v[t])
        {
            if(chuaxet[i])
            {
                //cout<<i<<" ";
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
        int n,m;cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        memset(chuaxet,true,sizeof(chuaxet));
        int cnt=0;
        for(int i=1;i<=n;i++)
        {

        if(chuaxet[i]){DFS(i,v);cnt++;}

    }
    cout<<cnt<<endl;
}
}

