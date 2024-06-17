
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];
int truoc[1001];
int n,m,s,t;
void BFS(int u,vector<int>v[])
{
    queue<int>q;
    q.push(u);
    //cout<<u;
    chuaxet[u]=false;
    while(!q.empty())
    {

        int t=q.front();q.pop();
        //cout<<t<<" ";
        for(auto i:v[t])
        {
            if(chuaxet[i])
            {
                q.push(i);
                chuaxet[i]=false;
                truoc[i]=t;
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
            t=truoc[t];}
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
            v[y].push_back(x);
        }
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,false,sizeof(truoc));
        int cnt=0;
        BFS(s,v);
        truyvet();
        cout<<endl;
    }
}


