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
            int res=(s[i]-'0')^(s[i-1]-'0');
            s2=s2+to_string(res);
        }
        cout<<s2<<endl;
    }

}
