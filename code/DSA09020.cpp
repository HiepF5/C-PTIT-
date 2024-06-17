#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005];
main()
{
    int n;
    cin>>n;
    int max1=0;
    int j;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        istringstream s_cin(s);
        while(s_cin>>j)a[i][j]=1;

    }
     for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++)cout<<a[i][j]<<" ";
     cout<<endl;}



}
