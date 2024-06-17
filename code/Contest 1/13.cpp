#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int k=n;
        int a[1000];
        a[1]=1;
        k--;
        for(int i=2;i<=m;i++)a[i]=0;
        for(int i=m;i>=1;i--)while(a[i]<9&&k>0){a[i]++;k--;}
        if(k>0)cout<<"-1";
        else {for(int i=1;i<=m;i++)cout<<a[i];}
        cout<<endl;
    }

}
