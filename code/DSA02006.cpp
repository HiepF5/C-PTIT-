#include<bits/stdc++.h>
#define ll long long
using namespace std;
int s=0;
int a[12],b[12];
int ok=0;
vector<int>c;
int n,k;
void xuat(int n)
{
    cout<<"[";
    for(int i=1;i<n-1;i++)cout<<b[i]<<" ";
    cout<<b[n-1]<<"] ";
}
void ql(int i,int s,int cur)
{
    if(s==k){xuat(i);ok=1;return;}
    for(int j=cur;j<=n;j++)
    {
        b[i]=a[j];
        if(s+a[j]<=k)ql(i+1,s+a[j],j+1);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ok=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+1+n);
        ql(1,0,1);
        if(ok==0)cout<<"-1";
        cout<<endl;

    }
}
