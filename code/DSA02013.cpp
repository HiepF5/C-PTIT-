#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mxn 100006
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
bool pr[205];
int l[205];
int s,p,sum,k;
int res=0;
vector<string> v;
void sang()
{
    pr[0]=pr[1]=1;
    for(int i=2;i<=sqrt(200);i++)
    {
        if(!pr[i])
            for(int j=i*i;j<=200;j+=i)pr[j]=1;
    }

}
int a[50];
void xuat(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)s+=l[a[i]];
    if(s==sum) {res++;string p;for(int i=1;i<=n;i++)p=p+to_string(l[a[i]])+" ";v.push_back(p);}
}
void sinh(int i,int n,int k)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k)xuat(k);
        else sinh(i+1,n,k);
    }
}
main()
{
    sang();
    int t;
    cin>>t;
    while(t--)
    {
        res=0;
        k=0;
        cin>>s>>p>>sum;
        for(int i=p+1;i<=sum;i++)if(!pr[i])k++;
        int cnt=0;
        for(int i=p+1;i<=sum;i++)if(!pr[i])l[++cnt]=i;
        sinh(1,k,s);
        cout<<res<<endl;
        for(auto i:v)cout<<i<<endl;
        v.clear();
    }


}
