#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    int min1=0;
    for(int i=0;i<n-1;i++)
    {
        min1=i;
        //int t=0;
        for(int j=i+1;j<n;j++)
        if(a[j]<a[min1])
        {
           min1=j;
          // t=1;
        }
         swap(a[i],a[min1]);

        //if(t==1)
        //{
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
        //}
    }

}
