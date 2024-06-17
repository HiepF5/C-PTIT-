#include<bits/stdc++.h>
#define ll long long
using namespace std;
void chuyendoi(int so,int he)
{
    if (so>=he) chuyendoi(so/he,he);
    printf("%c",(so%he)["0123456789ABCDEFGHIJKLMNOPQRSUVXYZ"]);

}

main()
{
    chuyendoi(15,3);
//    getch();
}
