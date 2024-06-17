#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[1005];
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=n,j=1;i>n/2+1;i--,j++)cout<<a[i]<<" "<<a[j]<<" ";
        if(n%2==1)cout<<a[n/2+1];
        else cout<<a[n/2+1]<<" "<<a[n/2];
        cout<<endl;
    }

}
