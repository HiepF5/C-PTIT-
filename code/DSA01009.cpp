#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
string a;
vector<string>res;
void xuat()
{
    int ok=0;
    for(int i=0;i<=n-k+1;i++)
        {int cnt=0;
        for(int j=i;j<i+k;j++)
        if(a[j]=='A')cnt++;
        if(cnt==k)ok++;
        }
        if(ok==1)res.push_back(a);
        //cout<<a;
}
void sinh(int i)
{
    for(char j='A';j<='B';j++)
    {
        a[i]=j;
        if(i==n-1)xuat();
        else sinh(i+1);

    }
}
main()
{
    cin>>n>>k;
    a.resize(n);
    sinh(0);
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<endl;
}
