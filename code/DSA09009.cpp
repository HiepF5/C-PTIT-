#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];
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
        int cnt=0;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=1;i<=n;i++)
        {
            if(chuaxet[i]){BFS(i,v);cnt++;}
        }
        cout<<cnt<<endl;
    }

}
