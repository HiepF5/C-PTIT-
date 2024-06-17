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
        int a[1005]={};
        for(int i=0;i<n;i++)cin>>a[i];
        next_permutation(a,a+n);
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}
