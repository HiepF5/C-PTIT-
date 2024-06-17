#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
            t=1;
        }
        if(t==1)
        {
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
        }
    }

}
