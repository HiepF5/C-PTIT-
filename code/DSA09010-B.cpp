#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int maxn=1001;
int n,m;
vector<int>adj[maxn],r_adj[maxn];
bool used[maxn];
stack<int>st;
void inp()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        r_adj[y].push_back(x);
    }

}
void dfs1(int u)
{
    used[u]=true;
    for(int v:adj[u])
        if(!used[v])dfs1(v);
    st.push(u);
}
void dfs2(int u)
{
    used[u]=true;
    //cout<<u<<" ";
    for(int v:r_adj[u])
    {
        if(!used[v])dfs2(v);
    }
}
void scc()
{
    memset(used,false , sizeof(used));
    for(int i=1;i<=n;i++)if(!used[i])dfs1(i);
    //cout<<endl;
    memset(used,false,sizeof(used));
    int cnt=0;
    while(!st.empty())
    {
        int u=st.top();
        st.pop();
        if(!used[u])
            {
                dfs2(u);
                cnt++;
            }
    }
    if(cnt==1)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

    inp();
    scc();
    for(int i=1;i<=n;i++){adj[i].clear();r_adj[i].clear();}
    }

}
