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
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int i=0,j=0;
        vector<int> v1,v2;
        //int k=0,s=0;
        while(i<n&&j<m)
        {
            if(a[i]<b[j]){v1.push_back(a[i]);i++;}
            else if(a[i]==b[j]){v1.push_back(a[i]);v2.push_back(a[i]);i++;j++;}
            else {v1.push_back(b[j]);j++;}
        }
        while(i<n)v1.push_back(a[i++]);
        while(j<m)v1.push_back(b[j++]);
        for(auto i:v1)cout<<i<<" ";
        cout<<endl;
         for(auto i:v2)cout<<i<<" ";
        cout<<endl;
    }
}
