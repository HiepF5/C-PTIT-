#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1],b[m+1],c[200]={};
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)c[i+j]=c[i+j]+a[i]*b[j];
        for(int i=0;i<n+m-1;i++)cout<<c[i]<<" ";
        cout<<endl;
    }

}
