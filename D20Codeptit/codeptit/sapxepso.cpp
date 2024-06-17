#include<stdio.h>
#include<string.h>
void sapxep(int so[], int n)
{
	for (int i=0; i<n-1; i++) {
	for (int j=i+1; j<n; j++) {
		if (so[i] < so[j]) {
		int temp = so[i];
		so[i] = so[j];
		so[j] = temp;
	}
	}
	}
}
void xuat(int so[], int n)
{
	for (int i=0; i<n; i++) {
				printf ("%d ", so[i]);
			}
			printf ("\n");
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[100000], s1[100000]={};
		int so[100000]={0}, n = 0, check = -1;
		gets (s);
		for (int i=0; i<strlen(s); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				s1[i] = s[i];
				check = 1;
			}
			else	s1[i] = 'a';
		}
		if (check != 1) printf ("-1\n");
		else {
			char *p = strtok (s1, "a");
			while (p != NULL) {
				for (int i = 0; i<strlen(p); i++) {
					so[n] = so[n]*10 + (p[i] - '0');
				}
				n++;
				p = strtok (NULL, "a");
			}
			sapxep(so,n);
			xuat(so,n);
		}
	}
	return 0;
}

