#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int ok;
 int n;
int a[11][11];
void ql(int x,int y)
{
    if(x==n&&y==n)
    {
        cout<<s<<" ";ok=1;return ;
    }
    if(a[x+1][y]==1)
    {
        s+="D";
        ql(x+1,y);
        s.erase(s.length()-1);
    }
    if(a[x][y+1]==1)
    {
        s+="R";
        ql(x,y+1);
        s.erase(s.length()-1);
    }

}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ok=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)cin>>a[i][j];
        if(a[1][1]==0)cout<<"-1";
        else
        {
            ql(1,1);
            if(ok==0)cout<<"-1";

        }
        cout<<endl;
    }

}
