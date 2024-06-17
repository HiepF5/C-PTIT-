#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void t()
{
	int tanso[100005]={},n,a[100005],k=1;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){int x;scanf("%d %d",&x,&a[i]);tanso[a[i]]++;}
	for(int i=0;i<n-1;i++)if(tanso[a[i]]!=1){k=0;break;}
	if(k==1)printf("Yes");
	else printf("No");
}
 int main()
{
	t();
	return 0;
}



