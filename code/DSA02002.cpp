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
        int b[11][11];
        for(auto &i:a)cin>>i;
        //for(auto i:a)cout<<i;
        for(int i=n-1;i>=0;i--)
        {
            int j=0;
            for(j=0;j<i;j++)b[i][j]=a[j];
            b[i][j]=a[j];
            for(int j=0;j<i;j++)a[j]=a[j]+a[j+1];
        }
        for(int i=0;i<n;i++)
            {
                cout<<"[";
            for(int j=0;j<i;j++)cout<<b[i][j]<<" ";
                cout<<b[i][i];
                cout<<"] ";
                //cout<<endl;
            }
            cout<<endl;
    }

}
