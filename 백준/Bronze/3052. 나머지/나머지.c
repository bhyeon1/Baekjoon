#include <stdio.h>

int main(void)
{
	int i, j;
	int count = 0;
	int k = 0;
	int temp;
	int arr[10];
	int bad[2];
	int length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < length; i++)
	{
		arr[i] = arr[i] % 42;
	}

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for(i = 0; i < length; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}