#include<bits/stdc++.h>
#define ll long long
  int f[100005]={};
using namespace std;
main()
{
    int n;
    cin>>n;

    vector<int >st;
    for(int i=1;i<=n;i++)
    {
       int k;cin>>k;
        st.push_back(k);
        f[k]++;
    }
    for(int i=0;i<st.size();i++)if(f[st[i]]>0){cout<<st[i]<<" ";f[st[i]]=0;}

}
