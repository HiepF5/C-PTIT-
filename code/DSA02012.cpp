#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  cnt=0;
 int m,n;
 int a[105][105];
void ql(int x, int y)
{
    if(x==m&&y==n){cnt++;return;}
    if(x<m)
    {
        ql(x+1,y);}
    if(y<n)
    {
        ql(x,y+1);
    }


}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>m>>n;
        for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
        ql(1,1);
        cout<<cnt<<endl;
    }
}
