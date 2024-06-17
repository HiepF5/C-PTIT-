#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    int k,j;
    for(int i=0;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0&&a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
        cout<<"Buoc "<<i<<": ";
        for(int c=0;c<=i;c++)cout<<a[c]<<" ";
        cout<<endl;
    }

}
