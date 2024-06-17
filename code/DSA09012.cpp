#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];

void DFS(int u,vector<int>v[])
{
    stack<int>s;
    chuaxet[u]=false;
    s.push(u);
    while(!s.empty())
    {
        int t=s.top();s.pop();
        for(auto i:v[t])
        {
            if(chuaxet[i])
            {
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
        int ok=0;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=1;i<=n;i++)
        {
        chuaxet[i]=false;
        if(i==1)DFS(2,v);
        else DFS(1,v);
        int tru=0;
        for(int j=1;j<=n;j++)if(chuaxet[j]==1){tru=1;break;}
        if(tru==1)cout<<i<<" ";

        memset(chuaxet,true,sizeof(chuaxet));

        }
        cout<<endl;


}
}

