#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[50]={},b[50]={};
void xuat()
{
    for(int i=1;i<=n;i++)cout<<a[i];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=n;j>=1;j--)
    {
        if(!b[j])
        {
            b[j]=1;
            a[i]=j;
            if(i==n)xuat();
            else sinh(i+1);
            b[j]=0;
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
