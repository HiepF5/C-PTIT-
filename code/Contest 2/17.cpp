#include<bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int a[n+1];
    int l[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    int res=1;
    for(int i=1;i<=n;i++)
    {
        l[i]=1;
        for(int j=1;j<=i-1;j++)
            if(a[j]<=a[i]&&l[i]<l[j]+1)l[i]=l[j]+1;
    }
    int m=*max_element(l+1,l+n+1);
    cout<<n-m<<endl;
    }
}
