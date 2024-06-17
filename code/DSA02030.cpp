#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int k;
char s;
int n;
int a[50];
int b[50];

void xuat()
{
    for(int i=1;i<=k;i++)cout<<str[a[i]-1];
    cout<<endl;
}
void sinh(int i)
{
    for(int j=a[i-1];j<=n;j++)
   // if(!b[i])
    {
        a[i]=j;
       // b[i]=1;
        if(i==k)xuat();
        else sinh(i+1);
       // b[i]=0;
    }
}
main()
{

    cin>>s;
    n=s-'A'+1;
    //cout<<n;
    cin>>k;
    a[0]=1;
    sinh(1);

}
