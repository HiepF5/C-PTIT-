#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a[]={1,2,5,10,20,50,100,200,500,1000};
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        int n;
        cin>>n;
        for(int i=9;i>=0;i--)
        {
            while(n-a[i]>=0){cnt++;n=n-a[i];}
        }
        cout<<cnt<<endl;
    }

}
