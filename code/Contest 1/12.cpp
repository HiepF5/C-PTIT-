#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool pr[]={};
void sang()
{
    pr[0]=pr[1]=1;
    pr[2]=0;
    for(int i=2;i<=sqrt(200);i++)
    {
        if(!pr[i])
            for(int j=i*i;j<=200;j=j+i)pr[j]=1;
    }
}
void sinh()
{
    for(int j=1;j<=n;j++)
    {
        a[i]=
    }
}
main()
{
    sang();
    vector<int>v;
    for(int i=1;i<=200;i++)if(pr[i]==0)v.push_back(i);
    int t;
    cin>>t;
    while(t--)
    {
        int s,p,n;
        cin>>s>>p>>n;
        sinh(1);
    }

}
