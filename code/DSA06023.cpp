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
        for(int j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
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
