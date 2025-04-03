#include <stdio.h>

int main(void)
{
	int i, j, N, M, a, b, temp;
	int bag[100];

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		bag[i] = i + 1;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		
		for (j = 0; j < (b - a + 1) / 2 ;j++)
		{
			{
				temp = bag[a - 1 + j];
				bag[a - 1 + j] = bag[b - 1 - j];
				bag[b - 1 - j] = temp;
			}
		}

	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", bag[i]);
	}

	return 0;
}