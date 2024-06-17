#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int n)
{
    queue<ll>q;
    q.push(9);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        if(x%n==0){cout<<x<<endl;
        break;}

    q.push(x*10);
    q.push(x*10+9);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }

}
