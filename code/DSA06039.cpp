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
        vector<int>v;
        v.resize(n);
        int d=-1;
        set<int>s;
        for(auto &i:v)cin>>i;
        //for(int i=0;i<n;i++)cout<<v[i]<<" ";
        for(int i=0;i<n;i++)
        {
            s.insert(v[i]);
            if(s.size()-i==0){d=i;break;}
        }
        if(s.size()==n)cout<<"-1";
        else cout<<v[d];
        cout<<endl;
    }
}
