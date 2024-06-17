#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[15][15],f[15];
int b[15]={};
    int n,k;
    int cnt;
    vector<string>v;
void xuat()
{
    int s=0;

   for(int i=1;i<=n;i++)s+=a[i][f[i]];
    //for(int i=1;i<=n;i++)cout<<f[i]<<" ";
   //for(int i=1;i<=n;i++)cout<<a[i][f[i]]<<" ";
   //cout<<s<<endl;
   if(s==k){cnt++;
   string st;
    for(int i=1;i<=n;i++)st=st+ to_string(f[i])+" ";
    v.push_back(st);
}
}
void sinh(int i)
{
    for(int j=1;j<=n;j++)
    if(!b[j]){
        f[i]=j;
        b[j]=1;
        if(i==n)xuat();
        else sinh(i+1);
        b[j]=0;
    }
}
main()
{

    cin>>n>>k;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)cin>>a[i][j];
    sinh(1);
    cout<<cnt<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

}
