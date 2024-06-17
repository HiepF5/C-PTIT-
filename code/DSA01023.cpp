#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool kiemtra(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)if(a[i]!=b[i])return 1;
    return 0;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int cnt=1;
        int a[1003]={};
        int b[20];
        for(int i=1;i<=k;i++){cin>>b[i];a[i]=i;}
        while(kiemtra(a,b,k))
        {
        cnt++;
        int i=k,j=n;
        while(i>=1&&a[i]==j){i--;j--;}
        a[i]++;
        if(i==0)a[0]=0;
        for(int j=i;j<=n;j++)a[j+1]=a[j]+1;
        }
        cout<<cnt;
        cout<<endl;

    }
}
