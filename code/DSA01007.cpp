#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[50]={},b[50]={};
string l="0AB";
void xuat()
{
    for(int i=1;i<=n;i++)cout<<l[a[i]];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=1;j<=2;j++)
    {
        if(!b[i])
        {
            b[i]=1;
            a[i]=j;
            if(i==n)xuat();
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

        cin>>n;
        sinh(1);
        cout<<endl;
    }
}
