#include <stdio.h>

int main()
{
	int i, N, v;
	int arr[100];
	int count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %d", &arr[i]);
	}
	scanf("%d", &v);

	for (i = 0; i < N; i++)
	{
		if (arr[i] == v)
		{
			count++;
		}
	}
	printf("%d", count);
}