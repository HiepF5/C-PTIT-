#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100005];
int m;
bool cmp(int a,int b)
{
    return abs(a-m)<abs(b-m);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>a[i];
        stable_sort(a+1,a+n+1,cmp);
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }

}
