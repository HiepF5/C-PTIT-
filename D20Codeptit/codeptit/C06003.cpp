#include <stdio.h>
int a[101][101];
int b[101][101];
int main()
{

	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n, m;
		int a[105] = {};
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				scanf("%d", &b[i][j]);
		int i, d = 1, gt = 1, h = n, c = m;
		int j = 1;
		while (1)
		{

			for (i = d; i <= c; i++)
			{
				a[j] = b[d][i];
				gt++;
				j++;
			}
			if (gt > m * n)
				break;
			for (i = d + 1; i <= h; i++)
			{
				a[j] = b[i][c];
				gt++;
				j++;
			}
			if (gt > m * n)
				break;
			for (i = c - 1; i >= d; i--)
			{
				a[j] = b[h][i];
				gt++;
				j++;
			}
			if (gt > m * n)
				break;
			for (i = h - 1; i > d; i--)
			{
				a[j] = b[i][d];
				gt++;
				j++;
			}
			if (gt > m * n)
				break;
			d++;
			h--;
			c--;
		}
		for (int j = m * n; j >= 1; j--)
			printf("%d ", a[j]);
		printf("\n");
	}
}
