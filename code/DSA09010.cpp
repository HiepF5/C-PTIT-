#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool chuaxet[1001];

int DFS(int u,vector<int>v[])
{
    int k=0;
    stack<int>s;
    chuaxet[u]=false;
    s.push(u);
    k++;
    while(!s.empty())
    {
        int t=s.top();s.pop();
        for(auto i:v[t])
        {
            if(chuaxet[i])
            {
                k++;
                s.push(t);s.push(i);chuaxet[i]=false;break;
            }
        }
    }
    return k;
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
            //v[y].push_back(x);
        }
        int ok=0;
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=1;i<=n;i++)
        {

        if(DFS(i,v)!=n){ok=1;cout<<"NO";break;}
        memset(chuaxet,true,sizeof(chuaxet));

        }
    if(ok==0)cout<<"YES";
    cout<<endl;


}
}

