#include<bits/stdc++.h>
#define ll long long
using namespace std;
int b[100006]={};
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
    int k=0,d=0;
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
        //cout<<"Buoc "<<i+1<<": ";
        d++;
        for(int i=n-1;i>=0;i--){b[k]=a[i];k++;}//cout<<a[i]<<" "<<b[i];}
        //cout<<k<<" ";
        //cout<<endl;
        }

        }
        k--;
        for(int i=d;i>=1;i--)
        {

        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<n;j++){cout<<b[k]<<" ";k--;}
        cout<<endl;
    }
    }
}
