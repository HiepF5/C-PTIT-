#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool kiemtra(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)if(a[i]!=b[i])return 1;
    return 0;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=1;
        int a[n],b[n];
        for(int i=0;i<n;i++){cin>>a[i];b[i]=i+1;}
        while(kiemtra(a,b,n))
        {
            next_permutation(b,b+n);
            cnt++;
        };
        cout<<cnt;
        cout<<endl;
    }

}
