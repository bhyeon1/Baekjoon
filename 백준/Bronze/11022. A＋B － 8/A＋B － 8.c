#include <stdio.h>

int main(void)
{
	int A, B, T;
	scanf("%d", &T);
	int i;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}

	return 0;
}