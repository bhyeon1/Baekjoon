#include <stdio.h>

int main()
{
	unsigned int i, N, X;
	int arr[10000];
	int count = 0;
	scanf("%u %u", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf(" %d", &arr[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (arr[i] < X)
		{
			printf("%d ", arr[i]);
		}
	}
}