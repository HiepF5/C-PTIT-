#include<stdio.h>
#include<string.h>
int N=1000000;
int check[1000000+1];
int sang()
{
	for (long long i = 4; i <= N; i+=2)check[i] = 1;
  	for (long long i = 3; i <= N; i+=2) {
    if (check[i] == 0) {for (long long j = i * i; j <= N; j += 2*i) check[j] = 1;}
	}

}
main()
{
	sang();
	int n;
	scanf("%d",&n);
	printf("2\n");
	for (long long i = 3; i <= n; i+=2) if (check[i] == 0) printf("%d\n", i);
}
