#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[50];
string l="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void xuat()
{
    for(int i=1;i<=n;i++)cout<<l[a[i]];
        cout<<endl;
}
void sinh(int i)
{
    for(int j=a[i-1]+1;j<=k-n+i;j++)
    {
        a[i]=j;
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

        cin>>k>>n;
        sinh(1);
    }

}
