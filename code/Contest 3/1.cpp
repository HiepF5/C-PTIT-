#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1005][1005];
ll qhd(string s1, string s2)
{
    int n=s1.size();
    int m= s2.size();
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(i==0||j==0)a[i][j]=0;
        else if(s1[i]==s2[j])a[i][j]=a[i-1][j-1]+1;
        else a[i][j]=max(a[i-1][j],a[i][j-1]);
    }
    //for(int i=0;i<n;i++)
    //    {for(int j=0;j<m;j++)cout<<a[i][j];cout<<endl;}
    return a[n-1][m-1];

}
main()
{
    int t;
    cin>>t;
    while(t--)

    {
        string s1, s2;
        cin>>s1>>s2;
        s1="@"+s1;
        s2="@"+s2;
        cout<<qhd(s1,s2)<<endl;

    }
}
