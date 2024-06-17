#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool chuaxet[1001];
int truoc[1001];
int n,m,s,t;
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
                s.push(t);s.push(i);chuaxet[i]=false;truoc[i]=t;break;
            }
        }
    }
}
void truyvet()
{
    int i=0;

    if(truoc[t]==0){cout<<"-1";}
    else
    {
        vector<int>l;
        while(t!=s){
            l.push_back(t);
            t=truoc[t];
            }
            l.push_back(s);
            reverse(l.begin(),l.end());
             for(auto i:l)cout<<i<<" ";

    }

}
main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        vector<int>v[1001];
        cin>>n>>m>>s>>t;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            //v[y].push_back(x);
        }
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,false,sizeof(truoc));
        int cnt=0;
        DFS(s,v);
        truyvet();
        cout<<endl;
    }
}


