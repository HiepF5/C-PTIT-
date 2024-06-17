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
        //for(auto i:a)cout<<i;
        for(int i=n-1;i>=0;i--)
        {
            cout<<"[";
            for(int j=0;j<i;j++)cout<<a[j]<<" ";
            cout<<a[i];
            cout<<"]";
            cout<<endl;
            for(int j=0;j<i;j++)a[j]=a[j]+a[j+1];
        }
    }

}
