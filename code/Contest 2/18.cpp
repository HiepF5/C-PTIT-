#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        int l[m+1]={};
        int j=0,i=0;
        l[0]=1;
        for(i=1;i<=n;i++)
        {
            for(j=m;j>=a[i];j--)
                if(l[j]==0&&l[j-a[i]]==1)l[j]=1;
        }
        //cout<<l[m];
        if(l[m]==1)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
            }
}
