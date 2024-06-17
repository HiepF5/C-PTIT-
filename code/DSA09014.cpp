#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n,m;

bool chuaxet[1001];
bool DFS(vector<int>v[1001],int u, int par)
{
    chuaxet[u]=true;
    for(int i:v[u])
    if(!chuaxet[i]){if(DFS(v,i,u))return true;}
    else if(i!=par)return true;
    return false;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>v[1001];
        cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(chuaxet,false, sizeof(chuaxet));
    int ok=0;
    for(int i=1;i<=n;i++)
        if(!chuaxet[i]&&DFS(v,i,0)){ok=1;}

    if(ok==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
