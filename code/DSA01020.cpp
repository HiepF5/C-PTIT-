#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int i=s.size()-1;
        while(i>0&&s[i]=='0')i--;
        if(i==0)s[i]='1';
        else s[i]='0';
        for(int j=i+1;j<s.size();j++)s[j]='1';
        cout<<s<<endl;
    }
}
