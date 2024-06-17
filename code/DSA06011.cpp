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
        int tmp=1e7;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(abs(a[j]+a[i])<abs(tmp))tmp=a[j]+a[i];
        }
        cout<<tmp<<endl;

    }

}
