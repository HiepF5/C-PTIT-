#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int sum=0;
int a[105];
int n;
int ok;
void ql(int i,int s)
{
    if(s==sum/2){ok=1;return;}
    if(ok==1)return;
    for(int j=i;j<=n;j++)
    {
        if(s+a[j]<=sum/2)ql(i+1,s+a[j]);
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok=0;
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++){cin>>a[i];sum+=a[i];}
        if(sum%2==1)cout<<"NO";
        else
        {
            ql(1,0);
            if(ok==0)cout<<"NO";
            else cout<<"YES";
        }
        cout<<endl;

    }

}
