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
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        //cout<<m[4];
        vector<int>v;
        int max1=0;
        int dem=0;
        for(auto i:m)
        {
            if(dem<i.second){max1=i.first;dem=i.second;}
        }


        if(dem<=n/2)cout<<"NO";
        else cout<<max1;
        cout<<endl;
    }

}
