#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[11];
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        set<int>st;
        //cout<<s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')st.insert(s[i]-48);
        }
        for(auto i:st)cout<<i<<" ";
        cout<<endl;
        //memset(cnt,0,sizeof(cnt));
    }

}
