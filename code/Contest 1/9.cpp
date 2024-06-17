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
        string s2;
        s2=s2+s[0];
        //cout<<s2;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')s2=s2+s2[i-1];
            else {
                    string temp="";
                if(s2[i-1]=='0')temp='1';
                else temp='0';
                    s2=s2+temp;
            }
           // cout<<s2<<endl;
        }
        cout<<s2<<endl;
    }

}
