#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[20]={};
void xuat()
{
    for(int i=1;i<=k;i++)cout<<a[i]<<" ";
    cout<<endl;
}
void sinh(int i)
{
    for(int j=n-k+i;j>=a[i-1]+1;j--)
    {
        a[i]=j;
        if(i==k)xuat();
        else sinh(i+1);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        a[0]=0;
        cin>>n>>k;
        sinh(1);
    }


}
