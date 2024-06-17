#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
        sort(b,b+n);
        int ok=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]&&a[n-i-1]!=b[i]){cout<<"No";ok=1;break;}
        }
        if(ok==0)cout<<"Yes";
        cout<<endl;
    }

}
