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
string mul(string str1,string str2)
{
    string str;
	int *res;
	res=new int[2000];
	for(int i=0;i<=str1.size()+str2.size();i++)res[i]=0;
	for(int i=str1.size()-1;i>=0;i--)
	for(int j=str2.size()-1;j>=0;j--)
	res[i+j+1]+=(str1[i]-'0')*(str2[j]-'0');
	for(int i=str1.size()+str2.size();i>=0;i--)
	if(res[i]>9)
	{
		res[i-1]+=res[i]/10;
		res[i]%=10;
	}
	for(int i=0;i<str1.size()+str2.size();i++)str+=(res[i]+'0');
	 while(str[0]=='0'&&str.size()>1)str.erase(0,1);
	 return str;
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
