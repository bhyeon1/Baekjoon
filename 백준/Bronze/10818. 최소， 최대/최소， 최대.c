#include <stdio.h>

int main()
{
	int i, N, min, max;
	int arr[1000000];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (i = 1; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d %d", min, max);
}