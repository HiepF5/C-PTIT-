#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int s=0,s1=0;
        for(auto &i:a){cin>>i;s+=i;}
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++)s1+=a[i];
        int t1=abs(s-s1-s1);
        s1=0;
        reverse(a.begin(),a.end());
        for(int i=0;i<k;i++)s1+=a[i];
        int t2=abs(s-s1-s1);
        cout<<max(t1,t2)<<endl;
    }


}
