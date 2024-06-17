#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int b[25];
int n,sum;
int ok=0;
int a[25];
int res=0;
vector<string>v;
void xuat(int m)
{
    string s;
    s=s+"{";
    for(int i=1;i<m-1;i++)s=s+to_string(b[i])+" ";
    s=s+to_string(b[m-1]);
    s=s+"}";
    v.push_back(s);
    //cout<<endl;
}
void ql(int i, int s, int cur)
{
    if(s==sum){xuat(i);res++;ok=1;return ;}
    for(int j=cur;j<=n;j++)
    {
        b[i]=a[j];
        if(s+a[j]<=sum)ql(i+1,s+a[j],j);
        b[i]=0;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        res=0;
        ok=0;
        cin>>n>>sum;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        ql(1,0,1);
        if(ok==0)cout<<"-1";
        else
        {

        cout<<res<<" ";
        for(auto i:v)cout<<i<< " ";
        }
        cout<<endl;
        v.clear();
    }

}
