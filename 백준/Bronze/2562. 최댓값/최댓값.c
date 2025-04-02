#include <stdio.h>

int main()
{
	unsigned int i, count;
	unsigned int max = 0;
	unsigned int arr[9];
	
	int length = sizeof(arr) / sizeof(unsigned int);

	for (i = 0; i < length; i++)
	{
		scanf("%u", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
			count = i + 1;
		}
	}
	printf("%u\n", max);
	printf("%u\n", count);
}