#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void cong(string s1, string s2)
{
    int t1=0,t2=0;
    for(int i=0;i<s1.size();i++)t1=(t1)*10+s1[i]-'0';
    for(int i=0;i<s2.size();i++)t2=(t2)*10+s2[i]-'0';
    cout<<t1+t2<<" ";
}
main()
{
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='6')s1[i]='5';
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='6')s2[i]='5';
    }
    cong(s1,s2);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='5')s1[i]='6';
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='5')s2[i]='6';
    }
    cong(s1,s2);

}
