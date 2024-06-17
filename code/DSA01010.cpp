#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int a[50];
        cin>>n>>k;
        set<int > st;
        for(int i=1;i<=k;i++){cin>>a[i];st.insert(a[i]);}
        int i=k,j=n;
        while(i>0&&a[i]==j){j--;i--;}
        if(i==0)cout<<k<<endl;
        else
        {
            int ans=i;
            a[i]++;
            for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;

            for(int i=1;i<=k;i++)st.insert(a[i]);
            cout<<st.size()-k<<endl;
        }
    }

}
