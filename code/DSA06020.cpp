#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;
        set<int>v;
        //v.resize(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.insert(x);
        }
        if(v.find(x)!=v.end())cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }

}
