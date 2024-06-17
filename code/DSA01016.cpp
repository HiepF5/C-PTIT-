#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[20];
void xuat(int m)
{
    cout<<"(";
    for(int i=1;i<m;i++)
        cout<<a[i]<<" ";
        cout<<a[m];
    cout<<") ";
}
void sinh(int i,int j,int s)
{
    for(int k=j;k>=1;k--)
    {
        if(s+k<=n)
        {
            a[i]=k;
            s=s+k;
            if(s==n)xuat(i);
            else sinh(i+1,k,s);
            s=s-k;
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
    sinh(1,n,0);
    cout<<endl;
    }

}
