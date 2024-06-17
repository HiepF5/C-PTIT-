#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n,m;
int degree[1001];
bool Kahn(vector<int>v[1001])
{
    queue<int>q;
    for(int i=1;i<=n;i++)
        if(degree[i]==0)q.push(i);
    int cnt=0;
    while(!q.empty())
    {
        int t=q.front();q.pop();
        cnt++;
        for(auto i:v[t])
        {
            degree[i]--;
            if(degree[i]==0)q.push(i);
        }
    }
    //cout<<cnt;
    if(cnt==n)return 0;
    return 1;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>v[1001];
    memset(degree, 0, sizeof(degree));
        cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        degree[y]++;
       // v[y].push_back(x);
    }
    if(!Kahn(v)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}

