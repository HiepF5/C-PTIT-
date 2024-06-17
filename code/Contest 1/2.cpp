#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[20],b[20];
int n;
string l="HA";
set<string>v;
bool kiemtra()
{
    if(a[1]==1)return 0;
    if(a[n]==0)return 0;
    for(int i=1;i<n;i++)if(a[i]==0&&a[i+1]==0)return 0;
    return 1;
}
void xuat()
{
    string s="";
    if(kiemtra())
    {for(int j=1;j<=n;j++)s=s+l[a[j]];//cout<<a[j];
   // cout<<endl;
    }
    v.insert(s);
    }
void sinh(int i)
{
    for(int j=0;j<=1;j++)
        {a[i]=j;
        if(i==n)xuat();
        else sinh(i+1);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sinh(1);
        for(auto i:v)cout<<i<<endl;
        v.clear();
    }


}
