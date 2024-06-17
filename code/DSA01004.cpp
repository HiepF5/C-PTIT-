#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[50]={};
int b[50]={};
void xuat()
{
    for(int i=1;i<=k;i++)cout<<a[i];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        if(b[i]==0)
        {
            b[i]=1;
            a[i]=j;
            if(i==k)xuat();
            else sinh(i+1);
            b[i]=0;
        }
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a[0]=0;
        sinh(1);
        cout<<endl;
    }
}
