#include<bits/stdc++.h>
#define ll long long
using namespace std;
int b[100005];
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
    int k=0, d=0;
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
            d++;
        //cout<<"Buoc "<<i+1<<": ";
        for(int i=n-1;i>=0;i--){b[k]=a[i];k++;}

        }
    }
     k--;
    for(int i=d-1;i>=0;i--)
        {

        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++){cout<<b[k]<<" ";k--;}
        cout<<endl;
    }


    }

}
