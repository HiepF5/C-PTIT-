#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(auto &i:a)cin>>i;
        int l=0,r=0;
        for(int i=0;i<n;i++)if(a[i]>a[i+1]){l=i;break;}
        for(int i=n-1;i>=0;i--)if(a[i]<a[i-1]){r=i;break;}
        //cout<<l+1<<" "<<r+1<<endl;
        int min1=*min_element(a+l,a+r+1);
        int max1=*max_element(a+l,a+r+1);
        for(int i=0;i<=l;i++)if(a[i]>min1){l=i;break;}
        for(int i=n-1;i>=r;i--)if(a[i]<max1){r=i;break;}
        cout<<l+1<<" "<<r+1<<endl;
    }

}
