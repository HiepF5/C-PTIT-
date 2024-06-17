#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[10],b[10];
int c[10];
int n;
void xuat()
{
    for(int i=1;i<=n;i++)cout<<c[a[i]]<<" ";
    cout<<endl;
}
void sinh(int i)
{
    for(int j=1;j<=n;j++)
    if(!b[j])
    {
        b[j]=1;
        a[i]=j;
        if(i==n)xuat();
        else sinh(i+1);
        b[j]=0;
    }
}
main()
{
   // int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>c[i];
    sort(c+1,c+n+1);
    sinh(1);

}
