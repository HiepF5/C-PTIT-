#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[1003]={};
        for(int i=1;i<=k;i++)cin>>a[i];
        int i=k,j=n;
        while(i>=1&&a[i]==j){i--;j--;}
        a[i]++;
        if(i==0)a[0]=0;
        for(int j=i;j<=n;j++)a[j+1]=a[j]+1;
        for(int i=1;i<=k;i++)cout<<a[i]<<" ";
        cout<<endl;

    }
}
