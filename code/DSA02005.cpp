#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int n=0;
int a[11],b[11]={};
void xuat()
{
    for(int i=1;i<=n;i++)cout<<s[a[i]-12];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=1;j<=n;j++)
    if(!b[j])
    {
        a[i]=j;
        b[j]=1;
        if(i==n)xuat();
        else sinh(i+1);
        b[j]=0;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>s;
        n=s.size();
        sinh(1);
        cout<<endl;
    }

}
