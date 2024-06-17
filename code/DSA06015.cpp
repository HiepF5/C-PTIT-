#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[100005];
void mergee(int a[],int l,int m,int r)
{
    vector<int>x(a+l,a+m+1);
    vector<int>y(a+m+1,a+r+1);
    int i=0,j=0;
    while(i<x.size()&&j<y.size())
    {
        if(x[i]<=y[j])
        {
            a[l]=x[i];l++;i++;
        }
        else {a[l]=y[j];l++;j++;}
    }
    while(i<x.size())
    {
        a[l]=x[i];l++;i++;
    }
    while(j<y.size())
    {
        a[l]=y[j];l++;j++;
    }
}
void merge_sort(int a[],int l, int r)
{
    if(l>=r)return;
    int m =(l+r)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,r);
    mergee(a,l,m,r);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        //int cnt[n];
        for(auto &i:a)cin>>i;
        merge_sort(a,0,n-1);
        for(auto i:a)cout<<i<<" ";
        cout<<endl;

    }

}
