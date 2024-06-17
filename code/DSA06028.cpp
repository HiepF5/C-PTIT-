#include<bits/stdc++.h>
#define ll long long
using namespace std;
int b[100005];
main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    int min1=0;
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        min1=i;

        for(int j=i+1;j<n;j++)
        if(a[j]<a[min1])
        {
           min1=j;

        }
         swap(a[i],a[min1]);

        //cout<<"Buoc "<<i+1<<": ";
        for(int i=n-1;i>=0;i--){b[k]=a[i];k++;}
        //cout<<endl;
    }
    k--;
        for(int i=n-1;i>=1;i--)
        {

        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<n;j++){cout<<b[k]<<" ";k--;}
        cout<<endl;
    }

}
