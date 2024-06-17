#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        ll max1=*max_element(a.begin(),a.end());
        ll min1=*min_element(a.begin(),a.end());
        cout<<max1-min1+1-a.size();
        cout<<endl;
    }

}
