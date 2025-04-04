#include <stdio.h>

int main(void)
{
	char num[101];
	int i, N;
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", num);

	for (i = 0; num[i] != 0; i++)
	{
		sum += num[i] - '0';
	}

	printf("%d", sum);

	return 0;
}