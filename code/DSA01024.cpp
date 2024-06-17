#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;

int a[50];
vector<string>v;
void xuat()
{
    for(int i=1;i<=k;i++)cout<<v[a[i]-1]<<" ";
        cout<<endl;
}
void sinh(int i,int n)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k)xuat();
        else sinh(i+1,n);
    }
}
main()
{
    cin>>n>>k;
    set<string>s;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }

    int j=0;
    for(auto i:s){v.push_back(i);}
    int n=s.size();
    sinh(1,n);
}
