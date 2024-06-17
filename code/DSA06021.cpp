#include<bits/stdc++.h>
#define ll long long
using namespace std;
//void timkiem(vector<int>v, int x)
//{

//}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;
        int a[n];
        int d=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==x)d=i;
        }
        cout<<d;
       // timkiem(v,x);
        cout<<endl;
    }

}
