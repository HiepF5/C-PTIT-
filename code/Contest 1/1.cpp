#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[11],b[11];
int n;
string l="AB";
void xuat()
{
    for(int j=1;j<=n;j++)cout<<l[a[j]];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=0;j<=1;j++)
    if(!b[i]){
        a[i]=j;
        b[i]=1;
        if(i==n)xuat();
        else sinh(i+1);
        b[i]=0;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //int n;
        cin>>n;
        sinh(1);
        cout<<endl;
    }

}
