#include<bits/stdc++.h>
#define ll long long
using namespace std;
string dp[102];
string sum(string a,string b)
{
    string res="";
    while(a.length()<b.length())a="0"+a;
    while(b.length()<a.length())b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48+b[i]-48+ carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0)res="1"+res;
    return res;
}
string mul(string a,string b)
{
    string res="";
    int n=a.length();int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m&&i-j>=1)
        {
            int a1=a[j]-48;
            int b1=b[i-j-1]-48;
            tmp+=a1*b1;
        }
        tmp+=carry;
        carry=tmp/10;
        res=(char)(tmp%10+48)+res;

    }
    while(res.length()>1&&res[0]=='0')res.erase(0,1);
    return res;
}
main()
{

    dp[0]=dp[1]="1";
    for(int i=2;i<=100;i++)
    {
        dp[i]="0";
        for(int j=0;j<i;j++)
        {
            dp[i]=sum(dp[i],mul(dp[j],dp[i-j-1]));
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }

}
