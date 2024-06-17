#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
bool chuaxet[1001];
int par[1001];
bool BFS(int u,vector<int>v[1001])
{
    queue<int>q;
    q.push(u);
    chuaxet[u]=true;
    while(!q.empty())
    {
        int t=q.front();q.pop();
        for(int i:v[t])
            if(!chuaxet[i])
            {
                q.push(i);chuaxet[i]=true;par[i]=t;
            }
            else if(i!=par[t])return true;
    }
    return false;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v[1001];
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            {
                int x,y;
                cin>>x>>y;
                v[x].push_back(y);
                v[y].push_back(x);
            }
            memset(chuaxet, false, sizeof(chuaxet));
            int ok=0;
            for(int i=1;i<=n;i++)
            {
                if(!chuaxet[i]&&BFS(i,v))ok=1;
            }
            if(ok==1)cout<<"YES";
            else cout<<"NO";
            cout<<endl;
    }

}
