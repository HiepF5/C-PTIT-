#include<bits/stdc++.h>
using namespace std;
int n,b;
float a[100],c[100],x[100],x1[100];
float Max=0;
void kt()
{
    float tong=0,tong2=0;
    for(int i=1;i<=n;i++)
    {
        tong+=a[i]*x[i];
        tong2+=c[i]*x[i];
    }
    if(tong2>Max&&tong<=b)
    {
        Max=tong2;
        for(int i=1;i<=n;i++)
        {
            x1[i]=x[i];
        }
    }
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n) kt();
        else Try(i+1);
    }
}
int main()
{
    cin>>n>>b;
    for(int i=1;i<=n;i++) cin>>c[i];
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(1);
    cout<<Max<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<x1[i]<<" ";
        }
}
