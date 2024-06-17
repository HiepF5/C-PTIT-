#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(auto &i:a)cin>>i;
        sort(a,a+n,cmp);
        for(int i=0;i<k;i++)cout<<a[i]<<" ";
        cout<<endl;
    }

}
