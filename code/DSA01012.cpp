#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[11];
void xuat()
{
    cout<<a[1];
    for(int i=2;i<=n;i++)
    {
        int res=a[i]^a[i-1];cout<<res;
    }
    cout<<" ";
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
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

        cin>>n;
        sinh(1);
        cout<<endl;
    }

}
