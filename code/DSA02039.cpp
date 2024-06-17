#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a[105];
string ss;
int d=0;
void xuat(int n)
{
    ss=ss+"(";
    for(int j=1;j<n;j++)ss=ss+to_string(a[j])+" ";
    ss=ss+to_string(a[n]);
    ss=ss+") ";
    d++;
}
void sinh(int i,int k,int s)
{

    for(int j=k;j>=1;j--)
    if(s+j<=n)
        {
        a[i]=j;
        s=s+j;
        if(s==n)xuat(i);
        else sinh(i+1,j,s);
        s=s-j;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
d=0;
        cin>>n;
        sinh(1,n,0);
        cout<<d<<endl;
        cout<<ss;
    ss.clear();
    cout<<endl;
    }

}
