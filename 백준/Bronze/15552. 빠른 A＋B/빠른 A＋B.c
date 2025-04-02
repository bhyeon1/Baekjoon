#include <stdio.h>

int main(void)
{
	int T;
	int A[1000000] , B[1000000];
	scanf("%d", &T);
	int i;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A[i], &B[i]);
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", A[i] + B[i]);
	}
	return 0;
}