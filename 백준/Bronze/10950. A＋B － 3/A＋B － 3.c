#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	int A[101], B[101];

	int i;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A[i], &B[i]);
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", A[i]+B[i]);
	}

	return 0;
}