#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[25],xuoi[25],nguoc[25],x[25];
int cnt=0;
int n;
void ql(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!a[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
        {
            x[i]=j;
            a[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
            if(i==n)cnt++;
            else ql(i+1);
            a[j]=0;xuoi[i-j+n]=0;nguoc[i+j-1]=0;
        }
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cnt=0;

        cin>>n;
        ql(1);
        cout<<cnt<<endl;
    }
}
