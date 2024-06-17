#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll c[1005][1005];
int qhd(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(i==0||j==0)c[i][j]=0;
        else if(s1[i]==s2[j])c[i][j]=c[i-1][j-1]+1;
        else c[i][j]=max(c[i-1][j],c[i][j-1]);
    }
    return c[n-1][m-1];
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        s1="0"+s1;
        s2="0"+s2;
       cout<<qhd(s1,s2)<<endl;
    }
}
