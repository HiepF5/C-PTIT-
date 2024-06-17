#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mxn=1e9+7;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>>pq;

        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;pq.push(x);
        }
        ll sum=0,ans=0;
        while(pq.size())
        {
            ll p=pq.top();pq.pop();
            ll q=pq.top();pq.pop();
            sum=(p+q)%mxn;
            ans=(ans+sum)%mxn;
            if(pq.size()==0)break;
            pq.push(sum);
        }
        cout<<ans<<endl;

    }

}
