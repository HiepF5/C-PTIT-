#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(auto &i:a)cin>>i;
        sort(a,a+n);
        if(a[0]==a[1])cout<<"-1";
        else cout<<a[0]<<" "<<a[1];
        cout<<endl;
    }

}
