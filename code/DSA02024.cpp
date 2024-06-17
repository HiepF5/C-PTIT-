#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int b[25];
int a[25];
vector<string>v;
void xuat(int m)
{
    string s;
    for(int i=1;i<=m;i++)
    {
        s=s+to_string(b[i])+ " ";
    }
    v.push_back(s);
}
void ql(int i,int cnt)
{
    for(int j=cnt;j<=n;j++)
    {
        b[i]=a[j];
        if(b[i]>b[i-1]){ql(i+1,j+1);
        if(i>=2)xuat(i);}
        b[i]=0;

    }
}
main()
{

    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    ql(1,1);
    sort(v.begin(),v.end());
    for(auto i:v)cout<<i<<endl;

}
