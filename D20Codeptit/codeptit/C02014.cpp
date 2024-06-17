#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n*2-1;
    int a[20][20];
    a[n][n]=1;
    int k=1;
    while(n>1)
    {
    for(int i=k;i<=m-k+1;i++)
    for(int j=k;j<=m-k+1;j++)
    if(i==k||j==k||j==m-k+1||i==m-k+1)a[i][j]=n;
    k++;
    n--;
    }
    for(int i=1;i<=m;i++)
    {printf("\n");
    for(int j=1;j<=m;j++)
    printf("%d",a[i][j]);
    }
    return 0;
}
