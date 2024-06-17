#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(char a,char b)
{
    return a<b;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ok=1;
        int k;
        string a;
        cin>>k>>a;
        cout<<k<< " ";
        int j=a.size()-1;
        while(j>0&&a[j]<=a[j-1])j--;j--;
        if(j>=0)
        {
        int x=a.size()-1;
        while(a[j]>=a[x])x--;
        //cout<<a;
        swap(a[j],a[x]);
        //cout<<a;
       // int r=j+1,s=a.size()-1;
       // while(r<=s)
       // {
        //    swap(a[r],a[s]);
        //    r++,s--;
       // }
       sort(a.begin()+j+1,a.end());
       //reverse(a.begin()+j+1,a.end());
        cout<<a;
        }
        else cout<<"BIGGEST";
        cout<<endl;

    }

}
