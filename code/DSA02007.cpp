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
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n&&i<s.length();i++)
        {
            int max1=i,j=s.length();
            while(j-->i)if(s[j]>s[max1])max1=j;
            if(max1!=i)swap(s[i],s[max1]);
            else n++;
        }
        cout<<s<<endl;
    }
}
