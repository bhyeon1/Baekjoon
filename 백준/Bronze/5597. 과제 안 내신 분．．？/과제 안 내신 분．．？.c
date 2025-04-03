#include <stdio.h>

int main(void)
{
	int i, j;
	int count = 0;
	int k = 0;
	int temp;
	int arr[28];
	int bad[2];
	int length = sizeof(arr) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= length + 2; i++)
	{
		count = 0;
		for (j = 0; j < length; j++)
		{
			if (arr[j] == i) 
			{
				break;
			}
			count++;
		}
		if (count == 28)
		{
			bad[k] = i;
			k++;
		}
	}

	if (bad[0] > bad[1])
	{
		temp = bad[0];
		bad[0] = bad[1];
		bad[1] = temp;
	}

	printf("%d\n", bad[0]);
	printf("%d\n", bad[1]);

	return 0;
}