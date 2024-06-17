#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[20];
int n;
int b[2]={6,8};
vector<int>v;
bool kiemtra()
{
    for(int i=0;i<n-1;i++)if((v[i]==8&&v[i+1]==8))return 0;
    for(int i=0;i<n-3;i++)if((v[i]==6&&v[i+1]==6&&v[i+2]==6&&v[i+3]==6))return 0;
    return 1;


}
void xuat()
{
    v.push_back(8);v.push_back(6);
    for(int i=1;i<=n-3;i++)v.push_back(b[a[i]]);
    v.push_back(6);
    if(kiemtra()){for(auto i:v)cout<<i; cout<<endl;}
    v.clear();
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-3)xuat();
        else sinh(i+1);
    }
}
main()
{
    cin>>n;
    sinh(1);
}
