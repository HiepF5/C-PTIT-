#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4]={};
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for(int i=0;i<=2;i++)
        {
            for(int j=1;j<=a[i];j++)cout<<i<<" ";
        }
        cout<<endl;
    }

}
