#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<pair<int,int>>p;
int a[1005][1005];
vector<int>v[1001];
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
      if(a[i][j])
      {
          v[i].push_back(j);
      }
      for(int i=1;i<=n;i++)
      {
          for(auto j:v[i])cout<<j<<" ";
          cout<<endl;
      }


}
