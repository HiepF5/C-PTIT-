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
    int k,j;
    int h=0;
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
       // cout<<"Buoc "<<i<<": ";
        for(int c=i;c>=0;c--){b[h]=a[c];h++;}
        //cout<<endl;
    }
    h--;
    for(int i=n-1;i>=0;i--)
        {

        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++){cout<<b[h]<<" ";h--;}
        cout<<endl;
    }

}
