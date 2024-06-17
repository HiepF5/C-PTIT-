#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        //v.resize(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        pair<int,int>p[m.size()];
        int j=0;
        for(auto i:m)
            {
                p[j].first=i.first;
                p[j].second=i.second;
                j++;
            }

            sort(p,p+m.size(),cmp);
            for(auto i:p)
            {
                for(int j=1;j<=i.second;j++)cout<<i.first<<" ";
                //cout<<i.first<<" "<<i.second;

            }
            cout<<endl;



    }

}
