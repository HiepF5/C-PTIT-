#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<n;i++)
        {
            int x;cin>>x;pq.push(x);
        }
        ll sum=0,ans=0;
        while(pq.size())
        {
            int p=pq.top();pq.pop();
            int q=pq.top();pq.pop();
            sum=p+q;
            ans+=sum;
            if(pq.size()==0)break;
            pq.push(sum);
        }
        cout<<ans<<endl;

    }

}
