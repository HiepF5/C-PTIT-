#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
bool chuaxet[1001];
vector<pair<int,int>>ans;
vector<int>v[1001];
void khoitao()
{
    for(int i=0;i<=n;i++)
        v[i].clear();
    memset(chuaxet,true,sizeof(chuaxet));
}
void DFS(int u)
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
int thanhphan()
{
    int dem=0;
        for(int i=1;i<=n;i++)
        {

        if(chuaxet[i]){DFS(i);dem++;}

    }
    return dem;
}
void canhcau(int canh, vector<pair<int,int>>tmp)
{
    for(int i=0;i<m;i++)
    {
        if(i!=canh)
        {
            v[tmp[i].first].push_back(tmp[i].second);
            v[tmp[i].second].push_back(tmp[i].first);
        }
    }
    int demtl=thanhphan();
    if(demtl>1)
    {
        if(tmp[canh].first<tmp[canh].second)
        ans.push_back({tmp[canh].first,tmp[canh].second});
        else ans.push_back({tmp[canh].second, tmp[canh].first});
    }

}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        khoitao();
        cin>>n>>m;
        vector<pair<int,int>>tmp;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            tmp.push_back({x,y});
            v[x].push_back(y);
            v[y].push_back(x);
        }

    //int cnt=thanhphan();
    for(int canh=0;canh<m;canh++)
    {
        khoitao();
        canhcau(canh,tmp);
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }
    ans.clear();
    cout<<endl;
}
}

