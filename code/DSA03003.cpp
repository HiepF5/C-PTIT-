#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mxn=1e9+7;
vector<int>a;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll s=0;
        for(int i=0;i<n;i++)
        {
            s=(s+(a[i]*i))%mxn;
        }
        cout<<s<<endl;
    }

}
