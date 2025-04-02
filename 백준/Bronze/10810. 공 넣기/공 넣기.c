#include <stdio.h>

int main()
{
	int i, j, N, M;
	int a, b, c;
	int bag[100];
	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		bag[i] = 0;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (j = a; j <= b; j++)
		{
			bag[j - 1] = c;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", bag[i]);
	}
}