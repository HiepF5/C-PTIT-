#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    sort(a,a+n);
    long long x = a[n - 1] * a[n - 2] * a[n - 3];
	long long y = a[0] * a[1] * a[2];
	x = max(x, y);
	y = a[0] * a[1];
	x = max(x, y);
	y = a[n - 1] * a[n - 2];
	x = max(x, y);
	y = a[0] * a[1] * a[n - 1];
	x = max(x, y);
	cout << x;

}
