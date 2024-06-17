#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=s.size()-1;
        while(s[i]=='1')i--;
        //cout<<i;
        if(i>0)s[i]='1';

        for(int j=i+1;j<=s.size()+1;j++)s[j]='0';
        cout<<s;
        cout<<endl;
    }

}
