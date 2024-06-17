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
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
        p.push_back({x,y});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        //for(auto i:p)cout<<i.first<<" "<<i.second;
        int temp=0;
        int ans=1;
        for(int i=1;i<p.size();i++)
        {
            if(p[i].second>=p[temp].first){ans++;temp=i;}
        }
        cout<<ans<<endl;
    }

}
