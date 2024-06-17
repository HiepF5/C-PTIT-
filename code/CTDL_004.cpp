#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k;
int a[100]={};
int b[100]={};
int c[100];
int cnt=0;
bool kiemtra()
{
    for(int i=1;i<k;i++)if(c[a[i]]>c[a[i+1]])return 0;
    return 1;
}
void xuat()
{
    cnt+=kiemtra();

    //for(int i=1;i<=k;i++)cout<<a[i];
    //cout<<" ";
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
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>c[i];
        a[0]=0;
        sinh(1);
        cout<<cnt;
        cout<<endl;
}
