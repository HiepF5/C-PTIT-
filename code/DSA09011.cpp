#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[1001][1001];
bool chuaxet[1001][1001];
int dx[8]={-1,0,0,1,-1,-1,1,1};
int dy[8]={0,-1,1,0,-1,1,-1,1};
void DFS(int i, int j)
{
    chuaxet[i][j]=true;
    for(int k=0;k<8;k++)
    {
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 &&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]==1&&!chuaxet[i1][j1])DFS(i1,j1);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)cin>>a[i][j];
    memset(chuaxet,false,sizeof(chuaxet));
    int cnt=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        if(a[i][j]==1&&!chuaxet[i][j])
        {
        DFS(i,j);cnt++;
        }
        cout<<cnt<<endl;
    }
}
